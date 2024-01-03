#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0,s=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
    if(arr[i][j]%2==0)
    {
        sum=sum+arr[i][j];
    }
    else
    {
        s=s+arr[i][j];
    }
        }
    }
    printf("%d ",sum);
    printf("%d ",s);
}