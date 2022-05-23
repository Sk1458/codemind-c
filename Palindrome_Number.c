#include<stdio.h>
int rev(int n)
{
    int rem,res=0;
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
    int x;
    scanf("%d",&x);
    while(x>0)
    {
        int y,z;
        scanf("%d",&y);
        z=rev(y);
        if(y==z)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        x-=1;
    }
    return 0;
}