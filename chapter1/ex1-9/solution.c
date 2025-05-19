#include <stdio.h>

/**
 * @brief Copies input to output, replacing sequences of one or more blanks with
 * a single blank.
 *
 * @return 0
 */

int main(void) {
  int c, last_char;
  last_char = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (last_char == 0) {
        putchar(c);
        last_char = 1;
      }
    } else {
      putchar(c);
      last_char = 0;
    }
  }
  return 0;
}