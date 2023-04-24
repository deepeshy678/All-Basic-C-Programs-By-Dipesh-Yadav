#include<stdio.h>
int main()
{

    int num,k=1;
    printf("Enter the number =");
    scanf("%d",&num);
    do
    {

    printf("\n%d x %d=%d\n",num,k,num*k);

    k++;
    }
    while(k<=num);


}
