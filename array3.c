#include<stdio.h>
int main()
{
     int i,j,row,column,r[10][10];
    printf("enter the value for row:");
    scanf("%d",&row);
    printf("enter the value for column:");
    scanf("%d",&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("r[%d][%d]:",i,j);
            scanf("%d",&r[i][j]);
        }
    }
    for(j=0;j<row;j++)
    {
        for(i=0;i<column;i++)
        {
            printf("%d",r[i][j]);
        }
        printf("\n");
    }
    return 0;
}