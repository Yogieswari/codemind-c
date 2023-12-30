#include<stdio.h>
int main()
{
    int n,i,z,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
        {
            s=s+1;
        }
    }
    printf("%d",s);
}