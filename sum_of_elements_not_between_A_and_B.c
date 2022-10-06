#include<stdio.h>

void fun(int n)
{
    int arr[n],a,b,sum=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        sum+=arr[i];
    }
    printf("%d",sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}