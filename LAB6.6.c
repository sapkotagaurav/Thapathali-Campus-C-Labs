
#include <stdio.h>
int a = 55;
static int b = 32;
int main() {
  int c;
  c = a + b;
  printf("global variable:%d", a);
  printf("static global variable:%d", b);

  printf("local variable:%d", c);
}
