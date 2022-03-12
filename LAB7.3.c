
#include <stdio.h>
int main() {
  int i, n;
  int arr[8], sum = 0;
  float average;

  printf("no of arrays:");
  scanf("%d", &n);
  printf("enter arrays:");

  for (i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++) {

    sum = sum + arr[i];
  }
  average = sum / n;

  printf("your sum is %d", sum);
  printf("your average is %f", average);
}
