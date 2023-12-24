#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b=0;
    for(int i=0;i<n;i++)
    {
        if(((arr[i]%2==0) && (arr[i+2]%2==1)) || ((arr[i]%2==1) && (arr[i+2]%2==0)))
        {
            b++;
        }
    }
    printf("%d",b-1);
}