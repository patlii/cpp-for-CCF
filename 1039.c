#include <stdio.h>

int main()
{
  int n;
  int ans = 1;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    //printf("%d\n", ans);
    ans *= 2;
  }

  printf("%d\n", ans);

  return 0;
}

