#!/bin/bash
# Build script
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++
mkdir -p build
cd build
cmake .. -G "Ninja" -DCMAKE_BUILD_TYPE=Release -DUSE_LOCAL_DEPS=1 -DSTATIC_BUILD=1
ninja
cd ..
