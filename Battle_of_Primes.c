#include<stdio.h>
#include<math.h>

int prime(int d)
{
	int x,i,c=0;
	x=sqrt(d);
	for(i=2;i<=x;i++)
	{
		if(d%i==0)
		{
			c++;
			break;	
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
	int d1,d2,d,c=0;
	scanf("%d%d",&d1,&d2);
	d=d1+d2;
	while(1)
	{
		d++;
		c++;
		if(prime(d))
		{
			printf("%d",c
			);
			break;
		}
	}
	return 0;
}