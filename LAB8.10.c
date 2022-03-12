#include <stdio.h>
void namesort(char **);
int main() {
  char *name[50];
  int i;
  printf("enter 5 words:");
  for (i = 0; i < 5; i++)
    gets(name[i]);
  namesort(name);
  printf("sorted words are:");
  for (i = 0; i < 5; i++)
    puts(name[i]);

  return 0;
}
void namesort(char *names[])

{
  char *temp;
  int i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
      if (strcmp(names[j], names[j + 1] > 0)) {
      }
      temp = names[i];
      names[i] = names[j + 1];
      names[j + 1] = temp;
    }
  }
}
