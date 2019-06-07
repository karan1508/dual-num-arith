#include "dualnumber.hpp"

int main(int argc, char *argv[]) {
  auto a = Dual<float>(10, 1);
  auto b = Dual<float>(20, 1);
  auto c = a + b;
  return 0;
}
