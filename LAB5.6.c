#include <stdio.h>
int main() {
  int a = 1, n, fact = 1;
  printf("enter a number:");
  scanf("%d", &n);
  while (n >= a) {
    if (n % a == 0) {
      fact = fact * a;
    }
    printf("factorial=%d", fact);
    a++;
  }
}
