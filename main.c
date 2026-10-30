#include <stdio.h>

int main(void) {
  double num1, num2 = 0.0;
  int sum = 0;

  scanf("%lf", &num1);
  scanf("%lf", &num2);

  printf("%f\n", num1 + num2);
  sum = num1 + num2;
  printf("%d\n", sum);

  return 0;
}
