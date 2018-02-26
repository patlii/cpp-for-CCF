#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

typedef struct {
  int no;
  int score;
} volunteer;

int comp(const void *p1, const void *p2)
{
  if (((volunteer *)p2)->score != ((volunteer *)p1)->score)
    return ((volunteer *)p2)->score - ((volunteer *)p1)->score;
  else
    return ((volunteer *)p1)->no - ((volunteer *)p2)->no;
}

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  volunteer *pv = (volunteer *)malloc(sizeof(pv) * n);

  m = floor(100.0 * DBL_EPSILON + m * 150.0 / 100.0);
  if (m > n)
    m = n;

  int i;
  for (i = 0; i < n; ++i)
    scanf("%d %d", &pv[i].no, &pv[i].score);

  qsort(pv, n, sizeof(pv[0]), comp);

  int total = 0;
  for (i = 0; i < n; ++i)
  {
    if (pv[i].score >= pv[m - 1].score)
      ++total;
    else
      break;
  }

  printf("%d %d\n", pv[m - 1].score, total);
  for (i = 0; i < total; ++i)
    printf("%d %d\n", pv[i].no, pv[i].score);

  free(pv);

  return 0;
}

