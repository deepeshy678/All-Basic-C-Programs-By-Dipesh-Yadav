#include<stdio.h>
int main()
{
   char deep[50];
   printf("Enter your name:");
   scanf("%[^\n]",&deep);

   printf("\n Your name is %s",deep);

}
