#include <stdio.h>
int main() {
  int n;
  printf("n:");
  scanf("%d", &n);
  if (n % 4 == 0) {
    if (n % 100 == 0) {
      if (n % 400 == 0) {
        printf("leap year");
      } else {
        printf("not leap year");
      }
    } else {
      printf("leap year");
    }
  } else {
    printf("not leap year");
  }
}
