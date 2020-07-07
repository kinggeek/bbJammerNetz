#!/bin/sh
cd third_party/flatbuffers
cmake -S . -B LinuxBuilds -G "Unix Makefiles"
cmake --build LinuxBuilds -- -j8
cd ../..
cmake -S . -B Builds/macOS -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build Builds/macOS -- -j8

