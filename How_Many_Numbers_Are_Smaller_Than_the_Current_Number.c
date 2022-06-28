#include<stdio.h>

int main()
{
    int n,term,great=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        term=arr[i];
        great=0;
        for(int j=0;j<n;j++)
        {
            if(term>arr[j])
            great++;
        }
        printf("%d ",great);
    }
    return 0;
}