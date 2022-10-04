#include<stdio.h>
int digit(int n)
{
    int d=1;
    while(n/=10)
    {
        d++;
    }
    return d;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",digit(arr[i]));
    }
}