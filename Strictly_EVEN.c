#include<stdio.h>
int main()
{
    int n,i,s=0,d=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            s=s+1;
            if(i%2==0)
            {
                d=d+1;
            }
        }
    }
    if(s==d)
    printf("True");
    else
    printf("False");
}