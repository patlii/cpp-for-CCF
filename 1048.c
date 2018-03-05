/**
 Boolean Matrix
**/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, j;
  scanf("%d", &n);
  int **arr = (int **)malloc(sizeof(int *) * n);

  for (i = 0; i < n; ++i) {
    arr[i] = (int *)malloc(sizeof(int) * n);
    for (j = 0; j < n; ++j)
      scanf("%d", &arr[i][j]);
  }

  int *row = (int *)malloc(sizeof(int) * n);
  int *col = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; ++i)
    for (j = 0; j < n; ++j) {
      row[i] += arr[i][j];
      col[j] += arr[i][j];
    }

  int x, y, nrow = 0, ncol = 0;
  for (i = 0; i < n; ++i) {
    if (row[i] % 2 == 1) {
      nrow++;
      x = i + 1;
    }
    if (col[i] % 2 == 1) {
      ncol++;
      y = i + 1;
    }
  }

  if (nrow ==0 && ncol == 0)
    printf("OK\n");
  else if (nrow == 1 && ncol == 1)
    printf("%d %d\n",x, y);
  else
    printf("Corrupt\n");

  return 0;
}

