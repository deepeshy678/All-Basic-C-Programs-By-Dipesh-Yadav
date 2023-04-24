#include<stdio.h>

int main()
{

int num,sum=0,rem;
printf("Enter the number =");
scanf("%d",&num);

for(int i=1;i=num;i++)
{
  rem=num%10;
  sum=sum+rem;
  num=num/10;



}
 printf("\n The sum=%d",sum);





}



