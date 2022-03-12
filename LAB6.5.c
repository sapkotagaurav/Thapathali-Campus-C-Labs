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
  } // divisible by 2:prime
  else {
    return 0;
  } // more than 2:not prime
}
int prime(int); // function calling
int main() {
  int num, result; // num in place of n
  printf("enter a number:");
  scanf("%d", &num);
  result = prime(num); // return value either 0 or 1
  printf("%d", result);
}
