#include <stdio.h>
int recursion(n) { // defining function
  if (n != 1) {
    return recursion(n - 1) + n;
  } else
    return n;
}
int main() {
  int num = 50;
  printf("%d", recursion(num)); // calling function
  return 0;
}
