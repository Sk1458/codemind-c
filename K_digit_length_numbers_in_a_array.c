#include<stdio.h>
int digits(int n)
{
    int d = 0;
    while(n/=10)
    {
        d++;
    }
    return d+1;
}

int main()
{
    int n,k,c=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(k==digits(arr[i]))
        {
            c++;
        }
    }
    printf("%d",c);
}