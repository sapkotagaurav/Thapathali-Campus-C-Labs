#include <stdio.h>
int main() {
  int a[3][2], b[3][2], i, j, sum[3][2];
  printf("enter matrix A:\n");
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 2; ++j) {
      printf("a%d%d:", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("enter matrix B:\n");
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 2; ++j) {

      printf("b%d%d:", i, j);
      scanf("%d", &b[i][j]);
    }
  }
  for (i = 0; i < 3; ++i) {

    for (j = 0; j < 2; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }
  printf("\n sum of matrices:\n");
  for (i = 0; i < 3; ++i) {
    printf("\n");
    for (j = 0; j < 2; ++j) {
      printf(" %d", sum[i][j]);
    }
  }
}
