#include <stdio.h>
int prime(n) { // declaration and definition
  int i, count = 0;
  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }
  if (count == 2) {
    return 1;
  } else {
    return 0;
  }
}
int prime(int);
int main() {
  int num, result;
  printf("enter a number:");
  scanf("%d", &num);
  result = prime(num);
  printf("%d is %d", num, result);
}
