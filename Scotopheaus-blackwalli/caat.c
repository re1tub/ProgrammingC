#include <stdio.h>
int main(void) {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == 'a' || c == 'A') {
      putchar(c);
      putchar(c);
    } else if (c == 'E' || c == 'e') {
      putchar(c);
      putchar(c);
    } else if (c == 'I' || c == 'i') {
      putchar(c);
      putchar(c);
    } else if (c == 'O' || c == 'o') {
      putchar(c);
      putchar(c);
    } else if (c == 'U' || c == 'u') {
      putchar(c);
      putchar(c);
    } else {
      putchar(c);
    }
  }
  return 0;
}
