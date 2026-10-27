#pragma once

#include <string>

namespace bm64 {
    // Program identity used by the frontend (window title and launcher).
    inline const std::string program_name = "Bomberman 64: The Second Attack!";
    inline const std::u8string program_id = u8"bm64u2";

    namespace config {
        // Creates the frontend's config tabs and loads the saved configs. Must
        // run before recomp::start, which builds the UI during RT64's init hook.
        void init();
    }
}
