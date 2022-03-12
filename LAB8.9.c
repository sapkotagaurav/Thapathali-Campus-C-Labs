
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char a[50], b[50];
  int i;
  printf("enter first string:");
  gets(a);
  printf("enter second string:");
  gets(b);
  i = strcmp(a, b);
  printf("%d\n", i);
  if (i == 0) {
    printf("both string are same");
  } else
    printf("unequal string");
}
