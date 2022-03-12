#include <stdio.h>
int main() {
  int a[3][3], b[3][3], i, j, mult[3][3], result, k;
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {

      printf("enter matrix a(%d,%d)", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {
      printf("enter matrix b(%d,%d)", i, j);
      scanf("%d", &b[i][j]);
    }
  };
  for (i = 0; i < 3; ++i) {

    for (j = 0; j < 3; ++j) {
      result = 0;
      for (k = 0; k < 3; ++k) {
        result = result + a[i][k] * b[k][j];
        mult[i][j] = result;
      }
    }
  }
  printf("\n multiplication of matrices:\n");
  for (i = 0; i < 3; ++i) {

    for (j = 0; j < 3; ++j) {
      printf(" %d", mult[i][j]);
    }
    printf("\n");
  }
}
