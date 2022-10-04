#include<stdio.h>
#include<math.h>

void prime(int n)
{
    int c=0,i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("not a prime");
    }
    else
    {
        printf("prime");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
}