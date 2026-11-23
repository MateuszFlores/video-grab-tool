// main.cpp — entry point. Wires config and subsystems together.

#include "videograbtool/settings.h"
#include "videograbtool/grabber.h"
#include "videograbtool/sites.h"
#include "videograbtool/convert.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    videograbtool::Settings settings = videograbtool::Settings::load_default();
    videograbtool::Grabber grabber(settings.store_path);
    videograbtool::Sites sites(settings.store_path);
    videograbtool::Convert convert(settings.store_path);
    std::fprintf(stderr, "[video-grab-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
