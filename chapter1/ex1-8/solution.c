#include <stdio.h>

/**
 * @brief Counts blanks, tabs, and newlines.
 *
 * @return 0
 */

int main(void) {
  int blanks, tabs, newlines, c;

  blanks = 0;
  tabs = 0;
  newlines = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case ' ':
        ++blanks;
        break;
      case '\t':
        ++tabs;
        break;
      case '\n':
        ++newlines;
        break;
      default:
        break;
    }
  }

  printf("blanks: [%d], tabs: [%d], newline: [%d]\n", blanks, tabs, newlines);
  return 0;
}