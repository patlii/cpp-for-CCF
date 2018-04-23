#include<stdio.h>  
main()  
{  
 struct   
    {  
        int num;  
        char name[20];  
        char sex;  
        int age;  
    }stu[5];  
       
 int i;  
 for(i=0;i<1;i++)  
        {  
          printf("请输入学生信息\n");  
     scanf("%d",&stu[i].num);  
          scanf("%s",&stu[i].name);  
          scanf("%c",&stu[i].sex);    //在%c之前加一个空格  
          scanf("%d",&stu[i].age);  
        }  
         
for(i=0;i<1;i++)  
        {  
          printf(  "*%s*",stu[i].name);  
          printf(  "*%d*",stu[i].age);  
        }  
    
}
