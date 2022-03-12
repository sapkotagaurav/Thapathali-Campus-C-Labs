#include <stdio.h>
int main() {
  int n;
  printf("enter a number:");
  scanf("%d", &n);
  if (n % 5 == 0 && n % 7 == 0 && n % 11 != 0) {
    printf("condition satisfied. your number is %d", n);
  } else {
    printf("condition not satisfied. try again");
  }
}
