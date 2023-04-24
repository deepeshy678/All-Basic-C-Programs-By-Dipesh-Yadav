#include<stdio.h>
int main()
{

int arr[5],i;
printf("Enter the numbers=");
for(i=0;i<=4;i++)
{
    scanf("%d",&arr[i]);
}

for(i=0;i<=4;i++)
{
    if(arr[i]%2==0)
    {
        printf("\n Even numbers are %d",arr[i]);
    }
}

}