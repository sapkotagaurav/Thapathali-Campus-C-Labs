#include <stdio.h>
int main() {
  int n, i, j, swap, array[10];
  printf("no of arrays:");
  scanf("%d", &n);
  printf("enter %d integers:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (array[i] > array[j]) {
        swap = array[i];
        array[i] = array[j];
        array[j] = swap;
      }
    }
  }
  printf("sorted array in ascending order:\n");
  for (i = 0; i < n; i++) {
    printf("%d \t", array[i]);
  }
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (array[i] < array[j]) {

        swap = array[i];
        array[i] = array[j];
        array[j] = swap;
      }
    }
  }
  printf("\n sorted in descending order:\n");
  for (i = 0; i < n; i++)
    printf("%d \t", array[i]);
}
