#include<stdio.h>

int main()
{
    int number,leftpower=2,rightpower=2;
    scanf("%d",&number);
    while(leftpower*2<=number)
    {
        leftpower*=2;
    }
    while(rightpower<=number)
    {
        rightpower*=2;
    }
    if(number-leftpower<rightpower-number)
    {
        printf("%d",number-leftpower);
    }
    else
    {
        printf("%d",rightpower-number);
    }
    return 0;
}