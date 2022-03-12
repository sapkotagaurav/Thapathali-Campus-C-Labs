#include <stdio.h>
int main() {
  int a = 0, b = 1, next = 1;
  printf("%d,%d,", a, b);
  while (next <= 500) {
    printf("%d,", next);
    a = b;
    b = next;
    next = a + b;
  }
}
