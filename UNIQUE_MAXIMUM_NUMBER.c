#include<stdio.h>

int main()
{
    int n,c=0,max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(j!=i&& a[i]!=a[j])
            c++;
        }
        if(c==n-1 && max<a[i])
        {
            max=a[i];
        }
    }
    if(max==0)
    printf("-1");
    else
    printf("%d",max);
    return 0;
}