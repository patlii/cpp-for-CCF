#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int comp(const void *a, const void *b)
{  
    return *(int *)a - *(int *)b;  
} 

void sort(int *arr, int n)
{
  int i, j, tmp;
  for (i = 0; i < n; ++i) {
    for (j = i + 1; j < n; ++j) {
      if (arr[j] < arr[i]) {
        tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
      }
    }
  }
}

int main()
{
  int n, arr[MAX];
  scanf("%d", &n);

  int i;
  for (i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }

  //sort(arr, n);
  qsort(arr, n, sizeof(arr[0]), comp);
    
  for (i = 0; i < n; ++i) {
    printf("%d", arr[i]);
    if (i != n - 1)
      printf(" ");
  }
  printf("\n");

  return 0;
}

