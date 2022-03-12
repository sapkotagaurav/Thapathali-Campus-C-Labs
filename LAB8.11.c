#include <stdio.h>
int main() {
  char str[] = {'u', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'};
  int i, j;
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
    printf("%c",str[j]);
    }
    printf("\n");
  }
}
