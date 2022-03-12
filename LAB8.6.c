#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char a[100], b[100], ch1 = ' ', ch2 = '.';
  int i, j;
  printf("\n enter a string: \n");
  gets(a);
  printf("original string: %s", a);
  while (a[i] != '\0') {
    if (a[i] != ' ') {
      b[j++] = a[i];
    }
    i++;
  }
  for (i = 0; b[i] != '\0'; i++) {
    if (b[i] == ch2) {
      b[i] = ':';
    }
  }
  printf("\n new string:%s", b);
}
