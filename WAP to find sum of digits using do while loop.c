#include<stdio.h>
int main()
{

   int num,sum=0,k,rem;
   printf("Enter the number =");
   scanf("%d",&num);

do
{
    rem=num%10;
    sum=sum+rem;
    num=num/10;
}
while(num!=0);
   printf("\n The total sum=%d",sum);






}
