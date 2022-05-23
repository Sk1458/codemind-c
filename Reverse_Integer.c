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

int rrev(int n)
{
    n=-n;
    int res=0,rem;
    while(n>0)
      {
          rem=n%10;
          res=res*10+rem;
          n=n/10;
      }
      return -res;
}

int main()
{
    int x,z;
    scanf("%d",&x);
    if(x<0)
    {
      z=rrev(x);
      printf("%d",z);
    }
    else
    {
        z=rev(x);
        printf("%d",z);
    }
    
    return 0;
}