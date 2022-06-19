#include<stdio.h>

int rev(int n)
{
    int res=0,r;
    while(n>0)
    {
        r=n%10;
        res=res*10+r;
        n=n/10;
    }
    return res;
}

int main()
{
    int k,temp,temp1,temp2,d1,d2;
    scanf("%d",&k);
    temp=k;
    while(1)
    {
        temp++;
        if(temp==rev(temp))
        {
            temp1=temp;
           d1=temp1-k;
           break;
        }
    }
    temp=k;
    while(1)
    {
        temp--;
        if(temp==rev(temp))
        {
            temp2=temp;
            d2=k-temp2;
            break;
        }
    }
    if(d1==d2)
    {
    	printf("%d %d",temp2,temp1);
	}
	if(d1>d2)
	{
		printf("%d",temp2);
	}
	if(d1<d2)
	{
		printf("%d",temp1);
	}
    return 0;
}