// remover.cpp — part of background-cutout.

#include "backgroundcutout/remover.h"

#include <cstdio>

namespace backgroundcutout {

Remover::Remover(const std::string& config_path)
    : config_path_(config_path) {}

void Remover::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Remover::run() {
    if (verbose_) std::fprintf(stderr, "[background-cutout] remover: run\n");
    // core logic lives here
    return true;
}

}  // namespace backgroundcutout
