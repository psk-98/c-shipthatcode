#include <stdio.h>

int main(void) {
  int n;
  long long odd = 0;
  scanf("%d", &n);

  /* TODO: add up the odd numbers 1, 3, 5, ... that are <= n,
     then print the total on one line. */
  for (int i = 0; i <= n; i++) {
    if (i % 2 != 0)
      odd += i;
  }

  printf("%lld", odd);
  return 0;
}
