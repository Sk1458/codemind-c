#include<stdio.h>

int abnt(int n)
{
    int a=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a+=i;
        }
    }
    return a;
}

int main()
{
    int x,y;
    scanf("%d",&x);
    y=abnt(x);
    if(y>x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}