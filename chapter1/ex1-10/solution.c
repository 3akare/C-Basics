#include <stdio.h>
/**
 * @brief Replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
 */

int main(void) {
  int c;
  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\t':
        printf("\\t");
        break;
      case '\b':
        printf("\\b");
        break;
      case '\\':
        printf("\\");
        break;
      default:
        putchar(c);
        break;
    }
  }
  return 0;
}