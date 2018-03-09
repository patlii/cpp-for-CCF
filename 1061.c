#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char *str = "NOIP@CCF";
  char input1[3], input2[100];

  scanf("%s", input1);
  while (strcmp(input1, "Y") == 0) {
    scanf("%s", input2);

    if (strcmp(input2, str) == 0) {
      printf("Success\n");
      break;
    }
    else
      printf("Sorry\n");

    scanf("%s", input1);
  }

  return 0;
}

