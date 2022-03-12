#include <stdio.h>
int main() {
  int i, j, n;
  printf("enter a number:");
  scanf("%d", &n);
  for (i = n - 1; i >= 1; i--) {
    for (j = 0; j < 1; j++) {
      printf("c\t");
    }
    printf("\n");
  }
  return 0;
}
