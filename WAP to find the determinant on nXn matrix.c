#include<stdio.h>
int main()
{
    int num[100][100],i,j,m,n,det;
    printf("Enter the size of row:");
    scanf("%d",&m);

    printf("Enter the size of column:");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n Enter element at %d%d:",i,j);
            scanf("%d",&num[i][j]);
        }
    }

for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",num[i][j]);
            
        }
        printf("\n");
    }

det=(num[0][0]*num[1][1])-(num[0][1]*num[1][0]);

printf("\n Determinant=%d",det);




}