#include<stdio.h>
int large (int,int,int);
int main()
{

  int num1,num2,num3;
  printf("Enter the three number =");
  scanf("%d %d %d",&num1,&num2,&num3);


  printf("\nThe larger number of %d %d %d =%d\n",num1,num2,num3, large(num1,num2,num3));
}
  int large(int a ,int b,int c)
  {
      if(a>b && a>c)
      {
          return a;
      }
      else
      {
       if(b>c)
            return b;
          else
            return c;
      }

  }





