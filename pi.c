#include <stdio.h>

int main()
{
  double pi = 0;
  for (int i = 0; ; ++i) {
    if (i % 2 == 0)
      pi += 1. / (2 * i + 1);
    else
      pi -= 1. / (2 * i + 1);

    printf("%f\n", pi * 4);
  }

  return 0;
}

