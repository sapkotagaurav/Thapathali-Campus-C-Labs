#include <stdio.h>
int main() {
  float arr[10];
  int i;

  printf("enter 10 floats:\n");
  for (i = 0; i < 10; i++) {
    scanf("%f", &arr[i]);
  }
  printf("entered floats are:\n");
  for (i = 0; i < 10; i++) {
    printf("%f\n", arr[i]);
  }
}
