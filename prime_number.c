#include<stdio.h>
#include<math.h>

int main()
{
    int x,i,z,c=0;
    scanf("%d",&x);
    z=pow(x,0.5);
    for(i=2;i<=z;i++)
    {
        if(x%i==0)
        {
            c+=1;
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
    
    return 0;
}