#include <stdio.h>

/**
 * @brief Experiments with escape sequences.
 *
 * @return 0
 * */

int main(void) {
  // printf("Trying \\x: Hello\xWorld!\n"); /* (observation: The compiler
  // produced an error: "\x used with no following hex digits"). RESULT: Error
  // */
  printf("Trying \\y: Hello\yworld!\n"); /* (observation: Compiler warning
                                            "unknown escape sequence: '\y'").
                                            RESULT: Trying \y: Helloyworld! */
  printf("Trying \\z: Hello\zworld!\n"); /* (observation: Compiler warning
                                            "unknown escape sequence: '\z'").
                                            RESULT: Trying \z: Hellozworld! */
  printf("Trying \\0: Hello\0world!\n"); /* (observation: \0 is the null
                                            terminator, marking the end of a
                                            string. The printf function stops
                                            processing the string at this point,
                                            ignoring characters that come after
                                            '\0'). RESULT: Trying \0: Hello */
  printf("Trying \\1: Hello\1world!\n"); /* RESULT: Trying \1: Helloworld! */
  printf("Trying \\2: Hello\2world!\n"); /* RESULT: Trying \2: Helloworld! */
  return 0;
}