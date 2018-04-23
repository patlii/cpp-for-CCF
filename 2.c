#include<stdio.h>
//include<conio.h>
main(void)
{
    int c;
    int a;
    a=getchar();
     
    if (EOF!=a)
        printf("%c",a);
         
    while((c=getchar())!='\n')//c接收的值是输入第一个字符后按下的回车换行符'\n',c是不会显示的
    {
        if (EOF==a)
            break;
        printf("%d",c);
    }
    getchar();
}
