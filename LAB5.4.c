#include <stdio.h>
int main() {
  int a = 1, b = 100;
  while (b >= a) {
    if (a % 7 == 0) {
      printf("exactly divisible by 7=%d", a);
    }
    a++;
  }
}
