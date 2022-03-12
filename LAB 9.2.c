#include <math.h>
#include <stdio.h>

struct lab {

  float distance;
};
int main() {
  float x1, y1, x2, y2;
  struct lab d;
  printf("x1:\t,y1:\n ");
  scanf("%f %f", &x1, &y1);
  printf("x2:\t,y2:\n ");
  scanf("%f %f", &x2, &y2);
  d.distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  printf("distance between them is %f", d.distance);
}
