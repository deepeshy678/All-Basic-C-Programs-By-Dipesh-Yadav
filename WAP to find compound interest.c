#include<stdio.h>
#include<math.h>
int main()
{
float p,t,r,ci;
printf("Enter the principal amount =");
scanf("%f",&p);

printf("Enter the rate of interest = ");
scanf("%f",&r);

printf("Enter the time =");
scanf("%f",&t);

ci=p*pow((1+r/100),t);

printf("\n The compound interest CI=%f",ci);







}
