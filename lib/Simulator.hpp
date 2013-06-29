#ifndef SIMULATOR_HPP_
#define SIMULATOR_HPP_

namespace montecarlo{

class Simulator{
public:
  explicit Simulator(int seed);
  double Simulate(int sampling_num) const;
private:
  Simulator();
  int seed_;
};

}//montecarlo

#endif //SIMULATOR_HPP_


