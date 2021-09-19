#include<stdio.h>
#include<conio.h>

int main()
{

 float hindi,eng,maths,bio,sst,total,per;
     printf("Student Marksheet\n");
       printf("enter the marks of hindi\n");
       scanf("%f",&hindi);
       printf("enter the marks of eng\n");
       scanf("%f", &eng);
       printf("enter the marks of maths\n");
       scanf("%f", &maths);
       printf("enter the marks of bio\n");
       scanf("%f",&bio);
       printf("enter the marks of sst\n");
       scanf("%f",&sst);
   total=hindi+eng+maths+bio+sst;
   per=(total/500)*100;
  printf("total marks obtaines=%2f",total);
  printf("\npercentage obtained=%2f",per);

}
