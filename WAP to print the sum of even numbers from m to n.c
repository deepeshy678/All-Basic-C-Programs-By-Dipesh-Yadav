#include<stdio.h>
int main()
{
    int m,n,sum;
    printf("From:");
    scanf("%d",&m);

    printf("To:");
    scanf("%d",&n);
    int deepesh=m;

    while(m<=n)
    {
        if(m%2==0)
        {
            printf("\n%d\n",m);
          sum=sum+m;
        }

    m++;
    }
printf("\n Sum of all even numbers from %d to %d=%d",deepesh,n,sum);

}
