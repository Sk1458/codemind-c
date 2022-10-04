#include<stdio.h>

int is_prime(int n)
{
    if(n==1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0],mini=0,maxi=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            mini=i;
        }
        if(max<arr[i])
        {
            max=arr[i];
            maxi=i;
        }
    }
    if(mini<maxi)
    {
        for(int i=mini;i<=maxi;i++)
        {
            if(is_prime(arr[i]))
            {
                count++;
            }
        }
    }
    else
    {
        for(int i=maxi;i<=mini;i++)
        {
            if(is_prime(arr[i]))
            {
                count++;
            }
        }
    }
    printf("%d",count);
}