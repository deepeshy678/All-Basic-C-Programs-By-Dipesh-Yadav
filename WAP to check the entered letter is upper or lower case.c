#include<stdio.h>
int main()
{


    char ch;
    printf("Enter any alphabetical letter=");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\nUpper case\n");
    }
else if(ch>='a' && ch<='z')
{
    printf("\n Lower case\n");
}
else
{
    printf("\n Invalid command");
}





}
