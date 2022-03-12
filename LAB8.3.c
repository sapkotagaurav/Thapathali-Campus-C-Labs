#include <stdio.h>
void swap(int *p1, int *p2) {
  int variable;
  variable = *p1;

  *p1 = *p2;
  *p2 = variable;
}

int main()

{
  int a, b;
  printf("enter value of a and b:\n");
  scanf("%d%d", &a, &b);
  printf("a=%d\t  b=%d", a, b);
  printf("\n swapped value:\n");
  swap(&a, &b);
  printf("a=%d\t", a);
  printf("b=%d", b);
}
