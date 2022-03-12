#include <stdio.h>
int main() {
  int a = 1, b = 50;

  while (b >= a) {
    if (a % 2 == 0) {
      printf("%d,", a);
    }
    a++;
  }
}
