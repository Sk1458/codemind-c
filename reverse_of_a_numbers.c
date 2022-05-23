#include<stdio.h>

int main()
{
    int x,rem=0,res;
    scanf("%d",&x);
    while(x>0)
    {
        res=x%10;
        rem=rem*10+res;
        x=x/10;
    }
    printf("%d",rem);
    
    return 0;
}