#include <iostream>
#include <math.h>

using namespace std;

double deltaX = 0.125;
double x = 2.0;

double f(double x) {
  return sqrt(exp(3*x) + 4*x*x);
}

int main() {
  cout << "A derivada estimada em x é: " << (1.0/(180.0*deltaX*deltaX))*(2*f(x-3*deltaX) - 27*f(x-2*deltaX) + 270*f(x-deltaX) - 490*f(x) + 270*f(x+deltaX) - 27*f(x+2*deltaX) + 2*f(x+3*deltaX));
}