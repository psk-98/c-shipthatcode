#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1)
    return 0;

  /* TODO: replace NULL with a malloc call that reserves room for n ints. */
  int *nums = malloc(n * sizeof *nums);
  if (nums == NULL) {
    /* TODO: allocation failed: print a message to stderr and return 1. */
    fprintf(stderr, "no memory for %d numbers\n", n);
    return 0;
  }

  for (int i = 0; i < n; i++)
    scanf("%d", &nums[i]);

  long long sum = 0;
  /* TODO: print the values from last to first on one line, single spaces
   * between them. */
  for (int k = n - 1; k >= 0; k--) {
    if (k != n - 1)
      printf(" ");
    printf("%d", nums[k]);
    sum += nums[k];
  }
  printf("\n%lld", sum);

  /* TODO: print the sum of all values on its own line (it can exceed an int).
   */

  /* TODO: give the block back. */
  free(nums);
  nums = NULL;
  return 0;
}
