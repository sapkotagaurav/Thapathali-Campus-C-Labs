#include <stdio.h>
int recursive(int num) { // function declaration
  if (num == 0 || num == 1) {

    return num;
  } else
    return recursive(num - 1) + recursive(num - 2);
} // function definition

int main() {
  int num, i;
  printf("enter the number of fibonocci series:");
  scanf("%d", &num);
  for (i = 0; i <= num; i++) {
    printf("%d,", recursive(i));
  }
}
