#include <stdio.h>
#include <string.h>
int main()
{
  char select[1],s[8];
  scanf("%s",select);
  while(strcmp(select,"Y")==0)
  {
    scanf("%s",s);
    if(strcmp(s,"NOIP@CCF")==0)
    {
      printf("Success\n");
      break;
    }
    else
      printf("Sorry\n");
    scanf("%s",&select);
    if(strcmp(select,"N")==0)
      break;
    
  }
  return 0;
}
