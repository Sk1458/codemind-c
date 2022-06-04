#include<stdio.h>

int fact(int n)
{
    int r=1;
    while(n>0)
    {
        r*=n;
        n--;
    }
    return r;
}

int main()
{
    int k,temp,rem,s=0;
    scanf("%d",&k);
    temp=k;
    while(k>0)
    {
        rem=k%10;
        s+=fact(rem);
        k=k/10;
    }
    if(temp==s)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
    return 0;
}