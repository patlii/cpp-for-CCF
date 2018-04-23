#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a, b;

  srand((unsigned)time(NULL));
  for (int i = 1; i < 100; ++i)
  {
    for (int j = 1; j < 100; ++j)
    {
      a = rand() % 100;
      b = rand() % 100;
      if (a + b > 100 || a == 0 || b == 0) continue;
      printf("%2d + %2d = \n", a, b);
    }
  }
}

