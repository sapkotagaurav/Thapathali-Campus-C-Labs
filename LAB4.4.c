#include <stdio.h>
int main() {
  int a, rev = 0, rem;
  printf("enter a number"); // a=78
  scanf("%d", &a);
  while (a != 0) {
    rem = a % 10;         // 78/10=8rem :7
    rev = rev * 10 + rem; // 0+8;8*10+7
    a = a / 10;           // 78/7quotient;7/10=0
    printf("rev=%d", rev);
  }
}
