#include "dualnumber.hpp"
#include <iostream>

using namespace std;

typedef Dual<float> FLOAT;

FLOAT function(FLOAT a, FLOAT b) {
  a += b;
  FLOAT ret(0, 0);
  ret += a;
  ret /= FLOAT(5.0, 0.0);
  return ret;
}

int main(int argc, char *argv[]) {
  auto a = Dual<float>(10, 1);
  auto b = Dual<float>(20, 1);
  b+=a;
  cout << "bR: " << b.realpart() << endl;
  cout << "bD: " << b.dualpart() << endl;

  auto val = function(FLOAT(3, 1), FLOAT(30, 0));
  cout << "val " << val.dualpart() << endl;
  return 0;
}
