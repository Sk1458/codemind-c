#include<stdio.h>

int main()
{
    int n,x=0;
    scanf("%d",&n);
    int a[n],t;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(int i=0;i<n;i++)
    {
        if(a[i]<=t)
        x++;
        else
        x+=2;
    }
    printf("%d",x);
    return 0;
}