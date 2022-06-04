#include<stdio.h>

int main()
{
    int c=0,a,b,temp;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
        c=a;
    }
    else
    {
        c=a;
    }
    while(1)
    {
        if(a%c==0 and b%c==0)
        {
            printf("%d",c);
            break;
        }
        c--;
    }
    return 0;
}