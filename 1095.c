#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int id;
  long v;
  long m;
} Goods;

int cmp(const void *a, const void *b)
{
  if (((Goods *)b)->v != ((Goods *)a)->v)
    return ((Goods *)b)->v - ((Goods *)a)->v;
  else
    return ((Goods *)a)->m - ((Goods *)b)->m;
}

int main()
{
  int i, n;
  scanf("%d", &n);

  Goods *g = (Goods *)malloc(sizeof(Goods) * n);

  for (i = 0; i < n; ++i) {
    (g+i)->id = i + 1;
    scanf("%ld %ld", &((g+i)->v), &((g+i)->m));
  }

  qsort(g, n, sizeof(Goods), cmp);

  for (i = 0; i < n; ++i) {
    printf("%d ", (g+i)->id);
  }

  free(g);
  printf("\n");

  return 0;
}

