#include <stdio.h>

int sum(int a, int b) { return a + b; }
int diff(int a, int b) { return a - b; }
int mult(int a, int b) { return a * b; }
float division(float a, float b) { return a / b; }
int main() {
  int x, y;

  printf("enter 2 numbers:");
  scanf("%d %d", &x, &y);
  printf("sum=%d", sum(x, y));
  printf("diff=%d", diff(x, y));
  printf("mult=%d", mult(x, y));
  printf("division=%f", division(x, y));
  return 0;
}
