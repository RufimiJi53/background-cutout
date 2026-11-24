// main.cpp — entry point. Wires config and subsystems together.

#include "backgroundcutout/settings.h"
#include "backgroundcutout/remover.h"
#include "backgroundcutout/video.h"
#include "backgroundcutout/batch.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    backgroundcutout::Settings settings = backgroundcutout::Settings::load_default();
    backgroundcutout::Remover remover(settings.store_path);
    backgroundcutout::Video video(settings.store_path);
    backgroundcutout::Batch batch(settings.store_path);
    std::fprintf(stderr, "[background-cutout] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
