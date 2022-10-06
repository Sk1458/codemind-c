#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c=0,sum=0,avg;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        c++;
    }
    printf("%d",c);
}