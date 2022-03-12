#include <stdio.h>
int main() {
  int a, b, c, min, max;
  printf("a:\t,b:\t,c:\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a < b && a < c) {
    min = a;
  } else if (b < a && b < c) {
    min = b;
  } else {
    min = c;
  }
  if (a < b && c < b) {
    max = b;
  } else if (b < a && c < a) {
    max = a;
  } else {
    min = a;
  }
  printf("max=%d", max);
  if (max % 2 == 0) {
    printf("max=even");
  } else {
    printf("max=odd");
  }
  printf("min=%d", min);
  if (min % 2 == 0) {
    printf("min=even");
  } else {
    printf("min=odd");
  }
}
