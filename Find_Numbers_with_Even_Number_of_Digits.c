#include<stdio.h>

int main()
{
	int s,i,l,c=0,d=0;
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		l=a[i];
		while(l>0)
		{
			l=l/10;
			c++;
		}
		if(c%2==0)
		{
			d++;
		}
		c=0;
	}
	printf("%d",d);
	return 0;
}