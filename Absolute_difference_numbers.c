#include<stdio.h>

int main()
{
    int n,x,firstx=0,lastx=0,nrev=0,tempx,tempn,temp1=0;
    scanf("%d%d",&n,&x);
    tempx=x;
    while(tempx)
    {
        temp1=(temp1*10)+(n%10);
        n/=10,tempx--;
    }
    while(temp1)
    {
        lastx=(lastx*10)+(temp1%10);
        temp1/=10;
    }
    tempn=n;
    while(tempn)
    {
        nrev=(nrev*10)+(tempn%10);
        tempn/=10;
    }
    while(x)
    {
       firstx=(firstx*10)+(nrev%10);
       nrev/=10,x--;
    }
    if(firstx>lastx)
    {
        printf("%d",firstx-lastx);
    }
    else
    {
        printf("%d",lastx-firstx);
    }
    return 0;
}