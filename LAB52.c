#include <stdio.h>
int main() {
  int a, x, b, y, t, hcf, lcm;
  printf("x:\t,y:\n"); // 6,9
  scanf("%d %d", &x, &y);
  a = x, b = y; // a=6,b=9
  while (b != 0 && a != 0) {
    if (b > a) {
      b = a % b;           // 9/6,rem=3
      t = b;               // t=9
      a = t;               // a=3
      hcf = a;             // hcf=3
      lcm = (x * y) / hcf; // 9*6/3
      printf("hcf=%d,lcm=%d", hcf, lcm);
    }
    if (b < a) {
      a = b % a;           // 9/6,rem=3
      t = a;               // t=9
      b = t;               // b=3
      hcf = b;             // hcf=3
      lcm = (x * y) / hcf; // 9*6/3
      printf("hcf=%d,lcm=%d", hcf, lcm);
    }
  }
}
