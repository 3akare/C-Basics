#include <stdio.h>

/**
 * @brief Demonstrates that the expression `getchar() == EOF` evaluates to 0
 * (false) or 1 (true).
 *
 * @return 0
 */
int main(void) {
  int c, isEOF;

  puts("Enter a character:");
  isEOF = (c = getchar()) == EOF;
  if (isEOF) {
    printf(
        "Input was the End-Of-File (EOF) signal (e.g., Ctrl+D or Ctrl+Z).\n");
  } else {
    printf("Input was a regular character: %c.\n", c);
  }

  return 0;
}