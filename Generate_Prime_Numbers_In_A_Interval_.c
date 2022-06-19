#include<stdio.h>
#include<math.h>

int prime(int n)
{
	int i,x,c=0;
	x=sqrt(n);
	for(i=2;i<=x;i++)
	{
		if(n%i==0)
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
	int l,u,i;
	scanf("%d",&l);
	scanf("%d",&u);
	for(i=l+1;i<u;i++)
	{
		if(prime(i))
		{
			printf("%d
",i);
		}
	}
	return 0;
}