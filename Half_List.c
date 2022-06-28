#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    int arr[n],a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=n-1;
    for(int i=0;i<n/2;i++)
    {
        a[i]=arr[m];
        m--;
        printf("%d ",a[i]);
    }
    m=0;
    for(int i=n/2,j=0;i<n;i++,j++)
    {
        a[i]=arr[j];
        m++;
        printf("%d ",a[i]);
    }
    return 0;
}