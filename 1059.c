#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char expr[250];

  scanf("%s", expr);

  char *p = NULL;
  p = strtok(expr, "+");

  int total = atoi(p);
  while (p != NULL) {
    p = strtok(NULL, "+");
    if (p != NULL) {
      total += atoi(p);
    }
  }

  printf("%d\n", total);

  return 0;
}

