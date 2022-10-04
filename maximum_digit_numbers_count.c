#include<stdio.h>
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
    int n,max=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(max<digits(arr[i]))
        {
            max=digits(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(digits(arr[i])==max)
        {
            printf("%d ",arr[i]);
        }
    }
}