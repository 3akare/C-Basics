#include <stdio.h>

/**
 * @brief Converts temperature from Fahrenheit to Celsius - In reverse order
 * (300 -> 0).
 *
 * @return 0
 * */

int main(void) {
  float fahrenheit, celsius;
  printf("%10s %8s\n-------------------\n", "Fahrenheit", "Celsius");
  for (fahrenheit = 300.0; fahrenheit >= 0.0; fahrenheit -= 20.0) {
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("%10.0f %8.1f\n", fahrenheit, celsius);
  }
}