#!/usr/bin/env bash

LD_LIBRARY_PATH=./build/lib:${LD_LIBRARY_PATH}
export LD_LIBRARY_PATH

for sampling_num in 10 100 1000 10000
do
    for seed in 4493 7012 5789 8180 6925 1900 3367 6549 534 494
    do
	./build/app/SimulatorMain ${sampling_num} ${seed}
    done
done