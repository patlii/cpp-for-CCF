#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, end, count = 0, i;
  scanf("%d", &n);
  end = n / 50;

  for (i = 0; i <= end; ++i)
    count += (n - (i * 50)) / 20 + 1;

  printf("%d\n", count);

  return 0;
}

