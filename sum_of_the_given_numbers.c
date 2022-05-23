#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    while(x>0)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d
",a+b);
        x-=1;
    }
    
    return 0;
}