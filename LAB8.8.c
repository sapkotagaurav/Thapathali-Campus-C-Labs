#include <stdio.h>
#include <string.h>
int main() {
  char a[50], b[50], c[100];
  int i = 0, j = 0;
  printf("enter first string:");
  gets(a);
  printf("enter second string:");
  gets(b);
  while (a[i] != 0) {
    c[i] = a[i];
    i++;
  }
  while (b[j] != 0) {
    c[i] = b[j];
    j++;
    i++;
  }
  c[i] = '\0';
  printf("concatenated string:%s", c);
}
