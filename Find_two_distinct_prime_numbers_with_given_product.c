#include<stdio.h>

int prime(int n)
{
    if(n==1)
    return 0;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                printf("%d ",i);
                c++;
            }
        }
    }
    if(c==0)
    printf("-1");
    return 0;
}