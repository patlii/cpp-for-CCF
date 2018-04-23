#include <stdio.h>
#include <stdlib.h>

#define K 1000000

int main()
{
  long arr[K];
  arr[1] = 1;
  arr[2] = 2;

  int i;
  for (i = 3; i < K; i++)
  {
    arr[i] = (2 * arr[i - 1] + arr[i - 2]) % 32767;
    //printf("%d: %ld\n", i, arr[i]);
  }

  int n, k;
  scanf("%d", &n);
  while (n--) {
    scanf("%d", &k);
    printf("%ld\n", arr[k]);
  }
  
  return 0;
}

