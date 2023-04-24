#include<stdio.h>
int main()
{
   int num,rem,rev=0,k;
   printf("Enter the number =");
   scanf("%d",&num);

   do
   {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;

   }
    while(num!=0);
    printf("\nThe reverse number =%d",rev);



}
