#include<stdio.h>
int main()
{
int num[5],ele,i,flat=0;
printf("Enter the elements=");
for(i=0;i<=4;i++)
{
scanf("%d",&num[i]);
}
printf("\n Enter a number to check=");
scanf("%d",&ele);

for(i=0;i<=4;i++)
{
    if(ele==num[i])
    {
        flat =1;
        break;
    }
    else
    {
        flat=0;
    }
}

if(flat==1)
{
    printf("\n %d is lies in index=[%d]",ele,i);
}
else{
   printf("\n %d is not lies in this array",ele);  
}

}