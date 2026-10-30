#include <stdio.h>

typedef struct {
  int x, y;
} Point;

/* TODO: return the squared distance between a and b. */
int dist2(Point a, Point b) {
  int x = (a.x - b.x) * (a.x - b.x);
  int y = (a.y - b.y) * (a.y - b.y);

  return x + y;
}

int main(void) {
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  Point a = {0, 0};
  Point b = {0, 0};
  /* TODO: build a from (x1, y1) and b from (x2, y2). */
  a.x = x1;
  a.y = y1;
  b.x = x2;
  b.y = y2;
  printf("%d\n", dist2(a, b));
  return 0;
}
