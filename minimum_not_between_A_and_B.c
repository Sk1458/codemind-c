#include<stdio.h>
#include<limits.h>

int main()
{
    int n,a,b,min=INT_MAX;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if((arr[i]<a || arr[i]>b) && arr[i]<min)
        min=arr[i];
    }
    if(min==INT_MAX)
    printf("-1");
    else
    printf("%d",min);
    return 0;
}