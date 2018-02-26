#include <stdio.h>
#define M 100
#define N 100

int main()
{
  int m, n, pic[M][N], pic2[M][N], count = 0;

  scanf("%d%d", &m, &n);

  int i, j;
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j) {
      scanf("%d", &pic[i][j]);
    }
  }

  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j) {
      scanf("%d", &pic2[i][j]);
      if (pic[i][j] == pic2[i][j])
        count += 1;
    }
  }

  printf("%.2f\n", count * 100.0 / (m * n));

  return 0;
}
