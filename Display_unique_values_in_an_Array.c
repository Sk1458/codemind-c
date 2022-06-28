#include<stdio.h>

int main()
{
    int n,c=0,x=0;
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
            if(i!=j&&a[i]==a[j])
            c++;
        }
        if(c==0)
        printf("%d ",a[i]);
        else
        x++;
    }
    if(x==n)
    {
        printf("-1");
    }
    return 0;
}