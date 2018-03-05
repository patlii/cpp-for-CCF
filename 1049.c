#include <stdio.h>
#include <stdlib.h>

void print_matrix(int **arr, int m, int n);
void rotate_matrix(int **arr, int m, int n);

int main()
{
  int m, n;
  scanf("%d %d", &m, &n);
  int i, j, **arr = (int **)malloc(sizeof(int *) * m);
  for (i = 0; i < m; ++i) {
    arr[i] = (int *)malloc(sizeof (int) *n);
    for (j = 0; j < n; ++j)
      scanf("%d", &arr[i][j]);
  }

  rotate_matrix(arr, m, n);
  //print_matrix(arr, m, n);
  return 0;
}

void print_matrix(int *arr[], int m, int n)
{
  int i, j;
  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j)
      printf("%d ", arr[i][j]);
    printf("\n");
  }
}

void rotate_matrix(int *arr[], int m, int n)
{
  int i, j = 0;
  for (i = 0; i < n; ++i) {
    for (j = m - 1; j >= 0; --j)
      printf("%d ", arr[j][i]);
    printf("\n");
  }
}

