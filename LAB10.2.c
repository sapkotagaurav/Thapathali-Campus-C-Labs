#include <stdio.h>
#include <stdlib.h>
int main() {
  char ch;
  FILE *fptr;
  fptr = fopen("D:\\filec.txt", "w");
  if (fptr == NULL) {
    printf("invalid!!failed to open file.");
    exit(1);
  }
  while (ch != '\n') {
    ch = getchar();
    putchar(ch);
  }
  fclose(fptr);
  return 0;
}
