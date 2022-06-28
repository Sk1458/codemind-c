#include<stdio.h>
#include<math.h>

int main()
{
    int n=0,rev,sum=0;
    scanf("%d",&rev);
    while(rev)
    {
        n=(n*10)+(rev%10);
        rev/=10;
    }
    while(n)
    {
        if(n%10==1)
        sum=sum*10+(pow(n%10,2));
        else if(n%10==3)
        sum=sum*10+(pow(n%10,2));
        else if(n%10==5)
        sum=sum*100+(pow(n%10,2));
        else if(n%10==7)
        sum=sum*100+(pow(n%10,2));
        else if(n%10==9)
        sum=sum*100+(pow(n%10,2));
        n/=10;
    }
    printf("%d",sum);
    return 0;
}