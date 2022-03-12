#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c;
  float disc, root1, root2, A, B;
  printf("a:\t,b:\t,c:\n");
  scanf("%f %f %f", &a, &b, &c);
  disc = (b * b) - 4 * a * c;
  root1 = (-b - sqrt(disc)) / 2 * a;
  root2 = (-b + sqrt(disc)) / 2 * a;
  A = -b / 2 * a;
  B = (sqrt(-disc)) / 2 * a;
  if (disc > 0) {
    printf("your roots are real and unequal %f,%f", root1, root2);
  } else if (disc == 0) {
    printf("your roots are real and equal %f,%f", root1, root2);
  } else if (disc < 0) {
    printf("your roots are imaginary and unequal %f+i%f,%f-i%f", A, B, A, B);
  }
}
