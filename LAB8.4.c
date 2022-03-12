#include <stdio.h>
int main() {
  char string[70], length = 0;
  int flag = 1, i;
  printf("enter a character:");
  gets(string);
  for (i = 0; string[i] != '\0'; i++) {
    length++;
  }
  for (i = 0; i < length / 2; i++) {
    if (string[i] != string[length - i - 1]) {
      flag = 0;
    }
  }
  if (flag == 1)

    printf("%s is a palindrome.", string);
  else
    printf("%s is not a palindrome.", string);
}
