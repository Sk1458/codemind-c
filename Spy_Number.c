#include<stdio.h>

int sumdig(int n)
{
    int res=0;
    while(n>0)
    {
        res+=n%10;
        n=n/10;
    }
    return res;
}

int prodig(int n)
{
    int r=1;
    while(n>0)
    {
        r*=n%10;
        n=n/10;
    }
    return r;
}

int main()
{
    int k,ks,kp;
    scanf("%d",&k);
    ks=sumdig(k);
    kp=prodig(k);
    if(ks==kp)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}