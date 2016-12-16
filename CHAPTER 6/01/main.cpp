#include "ComplexNumber.hpp"

int main() {
  
  // TESTING PURPOSES ONLY
  // C++ books should include this!
  
  ComplexNumber num(1.0,1.0);
  
  num.SetConjugate();
  
  printf("imaginaryPart = %f\n", num.GetImaginaryPart());
  
  return 0;
  
}