#include<stdio.h>

int rev(int n)
{
    int res=0,rem;
    while(n>0)
    {
        rem=n%10;
        res=res*10+rem;
        n=n/10;
    }
    return res;
}

int main()
{
    int k;
    scanf("%d",&k);
    while(1)
    {
        k+=rev(k);
        if(k==rev(k))
        {
            printf("%d",k);
            break;
        }
    }
    return 0;
}