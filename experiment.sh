#!/usr/bin/env bash

LD_LIBRARY_PATH=./build/lib:${LD_LIBRARY_PATH}
export LD_LIBRARY_PATH

for sampling_num in 10 100 1000 10000
do
     ./build/app/SimulatorMain ${sampling_num}
done