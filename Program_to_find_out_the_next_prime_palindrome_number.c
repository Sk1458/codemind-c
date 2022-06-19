#include<stdio.h>
#include<math.h>

int prime(int n)
{
	int i,c=0,x;
	x=sqrt(n);
	for(i=2;i<=x;i++)
	{
		if(n%i==0)
		{
			c++;	
		} 
	}
	if(c>0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int k,temp,r,rev=0;
	scanf("%d",&k);
	while(1)
	{
		k++;
		temp=k;
		while(temp>0)
		{
			r=temp%10;
			rev=rev*10+r;
			temp=temp/10;
		}
		if(k==rev)
		{
			if(prime(k))
			{
				printf("%d",k);
				break;	
			}	
		}
		rev=0;
	}
	return 0;
}