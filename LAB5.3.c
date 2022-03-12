#include <stdio.h>
int main() {
  int sum = 0, num, rem;
  printf("enter a number:");
  scanf("%d", &num);
  while (num != 0) {
    rem = num % 10;  // 567/10=7rem
    sum = sum + rem; // 0+7
    num = num / 10;
  } // 567/10=56 quotient
  printf("sum of each number is %d", sum);
}
