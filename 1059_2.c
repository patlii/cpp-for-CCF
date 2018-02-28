#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char expr[250];

  scanf("%s", expr);
  char *pe = expr;
  int len = 0;
  for (; *pe != '\0'; ++pe)
    if (*pe == '+')
      ++len;

  char *p = NULL;
  p = strtok(expr, "+");
  int n = 0;
  char **arr = (char **)malloc(sizeof(char *) * (len + 1));
  arr[n] = (char *)malloc(sizeof(char) * strlen(p));
  arr[n++] = p;

  while (p != NULL) {
    p = strtok(NULL, "+");
    if (p != NULL) {
      arr[n] = (char *)malloc(sizeof(char) * strlen(p));
      //arr[n++] = p;
      strncpy(arr[n++], p, strlen(p));
    }
  }

  int i, total = 0;
  for (i = 0; i < n; ++i) {
    //printf("%s\n", arr[i]);
    total += atoi(arr[i]);
  }
  free(arr);

  printf("%d\n", total);
  return 0;
}

