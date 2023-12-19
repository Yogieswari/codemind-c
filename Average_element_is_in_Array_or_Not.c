#include<stdio.h>
int main()
{
    int n,sum=0,avg,flag=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
       {
        printf("True");
        flag=1;
        break;
    }
    }
    if(flag==0)
    printf("False");
}