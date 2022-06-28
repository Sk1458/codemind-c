#include<stdio.h>

int main()
{
    long long number;
    int count=0;
    scanf("%lld",&number);
    while(number)
    {
        count++,number/=10;
    }
    if(count==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}