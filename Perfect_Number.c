#include<stdio.h>

int main()
{
    int num,c=0,i;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            c+=i;
        }
    }
    if(num==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}   
