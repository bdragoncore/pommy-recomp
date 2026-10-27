#include "bm64_audio.hpp"

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cstdint>
#include <vector>

#include <SDL.h>

// The N64 AI hands us interleaved 16-bit stereo at whatever rate the game sets
// with osAiSetFrequency, so the SDL device is opened to match rather than
// resampled.
static constexpr int kChannels = 2;

namespace {
    SDL_AudioDeviceID g_device = 0;
    uint32_t g_frequency = 0;       // rate the open device runs at
    uint32_t g_requested = 48000;   // last rate the game asked for
    bool g_reported_failure = false;

    int g_volume = 100;                   // output gain in percent
    std::vector<int16_t> g_scaled;        // scratch buffer for volume changes

    size_t queued_frames() {
        if (g_device == 0) {
            return 0;
        }
        return SDL_GetQueuedAudioSize(g_device) / (kChannels * sizeof(int16_t));
    }

    void open_device(uint32_t frequency) {
        if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) {
            if (!g_reported_failure) {
                g_reported_failure = true;
                std::fprintf(stderr, "Failed to initialise SDL audio: %s\n", SDL_GetError());
            }
            return;
        }

        SDL_AudioSpec want{};
        SDL_AudioSpec have{};
        want.freq = static_cast<int>(frequency);
        want.format = AUDIO_S16SYS;
        want.channels = kChannels;
        want.samples = 1024;
        want.callback = nullptr;    // push samples with SDL_QueueAudio

        g_device = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);
        if (g_device == 0) {
            if (!g_reported_failure) {
                g_reported_failure = true;
                std::fprintf(stderr, "No audio device: %s\n", SDL_GetError());
            }
            return;
        }

        SDL_PauseAudioDevice(g_device, 0);
        g_frequency = frequency;
    }
}

void bm64::audio::set_volume(int percent) {
    g_volume = percent < 0 ? 0 : (percent > 100 ? 100 : percent);
    if (g_device != 0) {
        SDL_PauseAudioDevice(g_device, g_volume == 0 ? 1 : 0);
    }
}

int bm64::audio::get_volume() {
    return g_volume;
}

void bm64::audio::set_frequency(uint32_t frequency) {
    g_requested = frequency;
    if (g_device != 0 && g_frequency == frequency) {
        return;
    }
    if (g_device != 0) {
        SDL_CloseAudioDevice(g_device);
        g_device = 0;
    }
    open_device(frequency);
}

void bm64::audio::queue_samples(int16_t* samples, size_t count) {
    if (g_device == 0) {
        // The game may submit a buffer before it sets the frequency; open at the
        // default rate rather than drop the first frames.
        if (g_requested != 0) {
            open_device(g_requested);
        }
        if (g_device == 0) {
            return;
        }
    }
    if (g_volume < 100) {
        g_scaled.resize(count);
        for (size_t i = 0; i < count; i++) {
            g_scaled[i] = static_cast<int16_t>(samples[i] * g_volume / 100);
        }
        SDL_QueueAudio(g_device, g_scaled.data(), static_cast<Uint32>(count * sizeof(int16_t)));
    }
    else {
        SDL_QueueAudio(g_device, samples, static_cast<Uint32>(count * sizeof(int16_t)));
    }

}

extern "C" uint8_t* bm64u2_rdram();

// The game's audio thread uses the queued length (osAiGetLength) to decide how
// much to generate. Report the total queued audio, capped at the AI buffer size
// (the word at 0x800ABB74), not just the oldest buffer; otherwise the queue
// grows and sound effects fall behind the action.
size_t bm64::audio::frames_remaining() {
    const size_t queued = queued_frames();

    uint32_t target = 0;
    const uint8_t* rdram = bm64u2_rdram();
    if (rdram != nullptr) {
        std::memcpy(&target, rdram + 0xABB74, sizeof(target));
    }
    if (target == 0 || target > 0x4000) {
        target = 544;   // AI buffer size observed at 32 kHz
    }
    return queued < target ? queued : target;
}
