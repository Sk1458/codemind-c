#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=pow(x,0.5);
    if(x==y*y)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
    return 0;
}