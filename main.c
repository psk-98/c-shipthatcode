#include <stdio.h>

void swap(int *a, int *b) {
  // TODO: exchange the two ints that a and b point to.
  int temp = *a;
  *a = *b;
  *b = temp;
  // a and b are addresses; change the values stored there.
}

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  swap(&a, &b);
  printf("%d %d\n", a, b);
  return 0;
}
