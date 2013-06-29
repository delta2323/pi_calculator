#include <iostream>
#include <cstdlib>
#include "../lib/Simulator.hpp"

int main(int argc, char** argv){
  size_t sampling_num = static_cast<size_t>(atoi(argv[1]));
  montecarlo::Simulator s;
  std::cout << s.Simulate(sampling_num) << std::endl;
}
