#include<stdio.h>

int main()
{
    int k,temp,e=0,c=0,o=0,temp1,rem;
    scanf("%d",&k);
    temp=k;
    temp1=k;
    while(temp>0)
    {
        temp=temp/10;
        c+=1;
    }
    while(temp1>0)
    {
        rem=temp1%10;
        if(rem%2==0)
        {
            e+=1;
        }
        if(rem%2!=0)
        {
            o+=1;
        }
        temp1=temp1/10;
    }
    if(c==e)
    {
        printf("Even");
    }
    else if(c==o)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}