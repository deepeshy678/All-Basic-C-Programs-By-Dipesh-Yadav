#include<stdio.h>
#include<conio.h>
int main()
{

int arr[6];
printf("Enter the numbers =");
for(int i=0; i<=5;i++)
{
scanf("%d",&arr[i]);

}
printf("\n The numbers are = ");
for(int i=0;i<=5;i++)
{

printf("%d ",arr[i]);
}


    getch();
}