#include "Simulator.hpp"
#include <cstdlib>

namespace montecarlo{

double dist2(double x, double y){
  return x*x+y*y;
}

double Simulator::Simulate(int sampling_num){
  int inside_circle_num = 0;
  for(int i = 0; i < sampling_num; ++i){
    double x = static_cast<double>(rand()) / RAND_MAX;
    double y = static_cast<double>(rand()) / RAND_MAX;
    if(dist2(x, y) <= 1){
      ++inside_circle_num;
    }
  }
  return static_cast<double>(4*inside_circle_num)/sampling_num;
}

}//montecarlo
