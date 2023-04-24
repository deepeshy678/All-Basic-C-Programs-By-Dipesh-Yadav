#include<stdio.h>
int main()
{
    int num,i=1,count;
    printf("Enter the number =");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {

        if(num%i==0)
        {
            count++;
        }


    }
    if(count==2)
    {
        printf("\n The %d number is a prime number \n ",num);

    }
    else
    {
        printf("\n The %d number is not a prime number \n",num);
    }

}
