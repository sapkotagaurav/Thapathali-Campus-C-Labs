#include <stdio.h>
int main() {
  int a[3][3], trans[3][3], i, j;
  printf("enter matrix \n ");
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {

      printf("a%d%d:", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < 3; ++i) {
    printf("\n");
    for (j = 0; j < 3; ++j) {
      printf("%d \t", a[i][j]);
    }
  }
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 3; ++j) {
      trans[j][i] = a[i][j];
    }
  }

  printf("\n transpose of a matrix:");
  for (i = 0; i < 3; ++i) {
    printf("\n");
    for (j = 0; j < 3; ++j) {
      printf("%d \t", trans[i][j]);
    }
  }
}
