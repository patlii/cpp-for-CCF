#include <stdio.h>
#include <stdlib.h>
#define N 4

int main()
{
  int i, j;
  int **arr = (int **)malloc(sizeof(int *) * N);
  for (i = 0; i < N; ++i) {
    arr[i] = (int *)malloc(sizeof(int) * N);
    for (j = 0; j < N; ++j) {
      scanf("%d", &arr[i][j]);
    }
  }

  int left = 0, right = 0;
  for (i = 0; i < N; ++i) {
    for (j = 0; j < N; ++j) {
      if (i == j)
        left += arr[i][j];
      if (i + j == N - 1)
        right += arr[i][j];
      //printf("%d ", arr[i][j]);
    }
    //putchar('\n');
  }

  printf("%d %d\n", left, right);

  return 0;
}


