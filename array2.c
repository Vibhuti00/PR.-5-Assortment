#include<stdio.h>
int main()
{
    int i,j,big,row,column,p[10][10];
    printf("enter the value for row:");
    scanf("%d",&row);
    printf("enter the value for column:");
    scanf("%d",&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("p[%d][%d]:",i,j);
            scanf("%d",&p[i][j]);
        }
    }
    big = p[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(p[i][j]>big)
            {
                big=p[i][j];
            }
        }
    }
    printf("the biggest value is:%d",big);
    return 0;
}