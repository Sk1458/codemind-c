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


int main()
{
    int num,sq1,num2,sq2,temp,z,temp2;
    scanf("%d",&num);
    temp=num*num;
    z=rev(num);
    temp2=z*z;
    if(temp==rev(temp2))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}