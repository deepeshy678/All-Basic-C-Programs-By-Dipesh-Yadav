#include<stdio.h>
int main()
{
  int num,k,rem,j,om;
  printf("Enter the number= ");
  scanf("%d",&num);
j=num%10;
  do
  {
   k=num%10;
   num=num/10;
  }
    while(num!=0);

    printf("\n The 1st and last digit=%d and %d",k,j);








}
