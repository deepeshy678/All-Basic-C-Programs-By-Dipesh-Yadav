#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter the value of a=");
    scanf("%d",&a);

    printf("Enter the value of b=");
    scanf("%d",&b);

    c=a;
    a=b;


    printf("\n The new value of a=%d\n",a);
    printf("\n The new value of b=%d\n",c);

}
