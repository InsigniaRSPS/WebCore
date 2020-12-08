#!/bin/bash
# Build script
mkdir -p build_deps
cd build_deps
cmake ../Source/GetDeps -G "Ninja"
ninja
cd ..
mkdir -p build
cd build
cmake .. -G "Ninja" -DCMAKE_BUILD_TYPE=Release -DSTATIC_BUILD=1 -DUSE_LOCAL_DEPS=1
ninja
cd ..
