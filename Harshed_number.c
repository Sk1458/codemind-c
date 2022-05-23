#include<stdio.h>

int dsum(int n)
{
    int s=0,rem;
    while(n>0)
    {
        rem=n%10;
        s+=rem;
        n=n/10;
    }
    return s;
}

int main()
{
    int x,temp;
    scanf("%d",&x);
    temp=x;
    if(temp%dsum(x)==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    return 0;
}