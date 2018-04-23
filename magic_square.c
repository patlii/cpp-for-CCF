#include <stdio.h>
#include <stdlib.h>

void print_odd(int **arr, int n);
void print_even(int **arr, int n);

int main()
{
  int n;
  scanf("%d", &n);

  int **arr = (int **)malloc(sizeof (int **) * (n + 2));
  int i, j;
  for (i = 0; i < n + 2; ++i)
    arr[i] = (int *)malloc(sizeof (int *) * (n + 2));

  if (n % 2 == 1)
    print_odd(arr, n);
  else
    print_even(arr, n);

  for (i = 1; i <= n; ++i) {
    for (j = 1; j <= n; ++j) {
      printf("%3d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

void print_odd(int *arr[], int n)
{
  int i, j, r;  

  i = 1, j = (n + 1) / 2;
  arr[i][j] = 1;
  for (r = 2; r <= n * n; ++r) {
    printf("%d: %d/%d:%d => ", r, i, j, arr[i-1][j+1]);

    if (arr[i - 1][j + 1] > 0) {
      ++i;
    }
    else {
      i--; j++;
    }

    if (i < 1)
      i = n;
    if (j < 1)
      j = n;
    if (i > n)
      i = 1;
    if (j > n)
      j = 1;
    printf("%d/%d:%d\n", i, j, r);
    arr[i][j] = r;  
  }
}

void print_even(int *arr[], int n)
{
}
