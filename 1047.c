#include <stdio.h>

int main()
{
  int i, j, arr[5][5];
  int min_col[5], max_row[5];

  for (i = 0; i < 5; ++i) {
    for (j = 0; j < 5; ++j) {
      scanf("%d", &arr[i][j]);
      if (j == 0)
        max_row[i] = arr[i][j];
      if (i == 0)
        min_col[j] = arr[i][j];

      if (arr[i][j] > max_row[i])
        max_row[i] = arr[i][j];

      if (arr[i][j] < min_col[j])
        min_col[j] = arr[i][j];
    }
  }

  int found = 0;
  for (i = 0; i < 5; ++i) {
    for (j = 0; j < 5; ++j) {
      if (arr[i][j] == max_row[i] && arr[i][j] == min_col[j]) {
        found = 1;
        printf("%d %d %d\n", i + 1, j + 1, arr[i][j]);
        break;
      }
    }
  }

  if (found == 0)
    printf("not found\n");

  return 0;
}

