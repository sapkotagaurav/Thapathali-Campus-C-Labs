#include <stdio.h>
int main() {
  int n, a[10], i, *p, sum = 0;
  printf("how many number do u want to enter?");
  scanf("%d", &n);
  printf("enter the numbers:\n");
  for (i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; ++i) {
    p = &a[i];

    sum = sum + *p;
  }

  printf("%d", sum);
}
