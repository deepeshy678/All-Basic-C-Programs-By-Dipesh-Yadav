#include<stdio.h>
int main()
{
    int wei,age;
    printf("Enter your weight =");
    scanf("%d %d",&wei,&age);



    switch(wei)
    {
   case 55:
    if(age <=25 && age>=18)
{
    printf("You are eligible for army");
}
else
{
      printf("\n You are not eligible for army");
}
break;
   case 60:
        if(age <=25 && age>=18)
{
    printf("You are eligible for army");
}
else{
    printf("\n You are not eligible for army");
}
break;
   case 65:
     if(age <=25 && age>=18)
{
    printf("You are eligible for army");
}
else
{
    printf("\n You are not eligible for army");
}
break;
   default :
    printf("\n Invalid Command");

    }

}
