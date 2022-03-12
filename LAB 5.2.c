#include <stdio.h>
int main() {
  int a, b, c, x, y, hcf, lcm;
  printf("enter two numbers:");
  scanf("%d %d", &x, &y);
  a = x;
  b = y;
  if (a < b) {
    while (b != 0) {
      c = b;
      b = a % b;
      a = c;
      hcf = a;
    }
  }

  if (b < a) {
    while (a != 0) {
      c = a;
      a = b % a;
      b = c;
      hcf = b;
    }
  }
  printf("hcf=%d\n", hcf);
  lcm = (x * y) / hcf;

  printf("lcm=%d\n", lcm);
}
