#include <stdio.h>
#include <stdlib.h>

void print_odd(int **arr, int n);
void print_even(int **arr, int n);

int main()
{
  int n;
  scanf("%d", &n);

  int **arr = (int **)malloc(sizeof (int **) * n);
  int i, j;
  for (i = 0; i < n; ++i)
    arr[i] = (int *)malloc(sizeof (int *) * n);

  if (n % 2 == 1)
    print_odd(arr, n);
  else
    print_even(arr, n);

  for (i = 0; i < n; ++i) {
    for (j = 0; j < n; ++j) {
      printf("%3d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

void print_odd(int *arr[], int n)
{
  int i, j, r;  

  for (i = 0, j = n / 2, r = 1; r <= n * n; ++r) {
    //printf("%d: %d/%d => ", r, i, j);
    if (i < 0)
      i = n - 1;
    if (j < 0)
      j = n - 1;
    if (i > n - 1)
      i = 0;
    if (j > n - 1)
      j = 0;

    if (arr[i][j] != 0)
      ++i;

    //printf("%d/%d\n", i, j);
    arr[i--][j++] = r;  
  }
}

void print_even(int *arr[], int n)
{
}
