#include <iostream>
#include "linear_system.h"

int main() {
  
  //Differentiator with 20rad/sec rolloff frequency
  LTI::array num({0,402}),den({400,40,1});  
  LTI::SisoSystem derivative(num,den,0.0,0.0001);
  //How to get second derivative
  LTI::SisoSystem second_derivative = derivative*derivative;
  
  double u=0,t=0;
  for(int i=0;i<100;i++){
    t+=0.1;
    u=t;
    //ramp function
    derivative.timeStep(t,u);//apply the input u at time t
    std::cout << "(t,y)=(" << derivative.getTime() << "," << derivative.getOutput(t) << ")" << std::endl;
    
  }
  
  return 0;
}
