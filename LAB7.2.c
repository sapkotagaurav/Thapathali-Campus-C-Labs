#include <stdio.h>
int main() {
  float arr[10];
  int i;
  float large = arr[0], small = arr[0];
  printf("enter the array\n");
  for (i = 0; i < 10; i++) {
    scanf("%f", &arr[i]);
  }
  for (i = 1; i < 10; i++) {

    if (arr[i] < small) {
      small = arr[i];
    }
  }
  printf("smallest float=%f", small);
  for (i = 1; i < 10; i++) {
    if (arr[i] > large) {
      large = arr[i];
    }
  }
  printf("largest float=%f\t", large);

  return 0;
}
