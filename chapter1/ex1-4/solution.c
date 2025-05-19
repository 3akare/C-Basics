#include <stdio.h>

/**
 * @brief Converts temperature from Celsius to Fahrenheit.
 *
 * @return 0
 * */

int main(void) {
  float fahrenheit = 0, celsius;
  printf("%8s %10s\n-------------------\n", "Celsius", "Fahrenheit");
  for (celsius = 0; celsius <= 100; celsius += 10) {
    fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
    printf("%8.1f %10.0f\n", celsius, fahrenheit);
  }
}