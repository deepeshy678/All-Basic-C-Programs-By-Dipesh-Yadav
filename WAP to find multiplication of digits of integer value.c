#include<stdio.h>
int main()
{
   int num,mul=1,rem,old;
   printf("Enter the number =");
   scanf("%d",&num);
   old=num;
   do
   {
       rem=num%10;
       mul=mul*rem;
       num=num/10;
   }
while(num!=0);
printf("\n The multiplication of %d digits=%d",old,mul);


}
