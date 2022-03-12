#include <stdio.h>
int main() {
  char string[70];
  int i, wcount = 1, chcount = 0;
  printf("enter a sentence:");
  gets(string);
  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] == ' ')

      wcount++;
    else
      chcount++;
  }
  printf("words in sentence:%d\n", wcount);
  printf("character in sentence:%d", chcount);
}
