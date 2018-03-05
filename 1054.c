#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(int arr[][102], int i, int j);

int main()
{
  int i, j, n, m;
  int arr[102][102];
  char tmp;
  memset(arr, 0, sizeof(arr));
  scanf("%d %d\n", &n, &m);
  for (i = 1; i <= n; ++i) {
    for (j = 1; j <= m; ++j) {
      scanf("%c", &tmp);
      if (tmp == '*')
        arr[i][j] = 1;
    }
    getchar();
  }
//*
  puts("---");
  for (i = 0; i <= n + 1; ++i) {
    for (j = 0; j <= m + 1; ++j) {
      printf("%d ", arr[i][j]);
    }
    putchar('\n');
  }
  puts("---");
//*/
  for (i = 1; i <= n; ++i) {
    for (j = 1; j <= m; ++j) {
      if (arr[i][j] == 1)
        printf("*");
      else
        printf("%d", count(arr, i, j));
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}

int count(int arr[][102], int i, int j)
{
  int p, q, nc = 0;
  for (p = i - 1; p <= i + 1; ++p)
    for (q = j -1 ; q <= j + 1; ++q)
      nc += arr[p][q];

  return nc;
}

