#include<stdio.h>
#include<limits.h>
int digits(int n)
{
    int d = 0;
    while(n/=10)
    {
        d++;
    }
    return d;
}

int main()
{
    int n,c=0,m=INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(digits(arr[i])<m)
        {
            m=digits(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(digits(arr[i])==m)
        {
            c++;
        }
    }
    printf("%d",c);
}