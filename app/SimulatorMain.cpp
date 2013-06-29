#include <iostream>
#include <cstdlib>
#include "../lib/Simulator.hpp"

int main(int argc, char** argv){
  size_t sampling_num = static_cast<size_t>(atoi(argv[1]));
  int seed = atoi(argv[2]);
  montecarlo::Simulator s(seed);
  std::cout << s.Simulate(sampling_num) << std::endl;
}
