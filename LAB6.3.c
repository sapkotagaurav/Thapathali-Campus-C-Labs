#include <stdio.h>
int fact(num) {
  if (num >= 1) {
    return (num * fact(num - 1));
  } else
    return 1;
}
int main() {
  int n, r;
  int perm, comb;
  printf("enter n and r");
  scanf("%d %d", &n, &r);
  if (n >= r) {
    perm = fact(n) / fact(n - r);
    comb = perm / fact(r);
    printf("permutation is %d", perm);
    printf("combination is %d", comb);
  } else
    printf("invalid entry");
}
