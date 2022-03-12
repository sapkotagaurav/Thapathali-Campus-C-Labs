#include <math.h>
#include <stdio.h>


int main() {
  int x, y = 0, n, i;
  printf("x:\t,n:\n");
  scanf("%d%d", &x, &n);
  for (i = 1; i <= n; i++) {
    y = y + (pow(x, i));
  }
  printf("%d", y);
}
