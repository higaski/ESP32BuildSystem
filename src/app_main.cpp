#include <driver/gpio.h>
#include <stdio.h>
#include "sum.hpp"

extern "C" void app_main() {
  constexpr int a{41};
  constexpr int b{1};
  printf("sum(%d, %d) is %d\n", a, b, sum(a, b));
}
