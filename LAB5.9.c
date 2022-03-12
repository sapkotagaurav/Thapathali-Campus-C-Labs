#include <stdio.h>
int main() {
  float i, n, fact = 1;
  float sum;
  printf("enter the terms:");
  scanf("%f", &n);
  for (i = 1; i <= n; i++) {

    fact = fact * i;
    sum = sum + (i / fact);
  }
  printf("%f", sum);
}
