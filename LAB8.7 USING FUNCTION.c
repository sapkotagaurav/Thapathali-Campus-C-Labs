#include <stdio.h>
#include <string.h>
void main() {
  char str1[100], str2[100];
  int i;
  printf("enter a string:");
  gets(str1);

  strcpy(str2, str1);
  printf("copied string: %s\n", str2);
  getch();
}
