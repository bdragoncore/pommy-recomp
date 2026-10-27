#pragma once

#include <cstddef>
#include <cstdint>

// Host audio output. ultramodern's osAiSetNextBuffer ends in these callbacks;
// the queue lives in SDL, which is already linked for RT64.
namespace bm64::audio {
    void queue_samples(int16_t* samples, size_t count);
    size_t frames_remaining();
    void set_frequency(uint32_t frequency);
    // Output gain in percent (0-100), applied when samples are queued.
    void set_volume(int percent);
    int get_volume();
}
