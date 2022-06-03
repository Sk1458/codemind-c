#include<stdio.h>
#include<math.h>

int notprime(int n)
{
    int i,c=0;
    for(i=2;i<=pow(n,0.5);i++)
    {
       if(n%i==0)
       {
           c++;
       }
    }
    if(c>0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int k,c=0,i;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        if(notprime(i)&&k%i==0)
        {
            c++;
        }
    }
    c+=1;
    printf("%d",c);
}