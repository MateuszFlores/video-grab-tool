// convert.cpp — part of video-grab-tool.

#include "videograbtool/convert.h"

#include <cstdio>

namespace videograbtool {

Convert::Convert(const std::string& config_path)
    : config_path_(config_path) {}

void Convert::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Convert::run() {
    if (verbose_) std::fprintf(stderr, "[video-grab-tool] convert: run\n");
    // core logic lives here
    return true;
}

}  // namespace videograbtool
