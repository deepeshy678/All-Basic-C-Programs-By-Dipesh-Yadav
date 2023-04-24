#include<stdio.h>
int main()
{
    int a=1,num,sum=0;
    while(a<=10)
    {
    printf("Enter the number=");
    scanf("%d",&num);
    sum+=num;

    a++;
    }

    printf("\n The total sum=%d",sum);

}
