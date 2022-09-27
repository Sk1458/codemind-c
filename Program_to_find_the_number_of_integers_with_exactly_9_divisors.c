#include<stdio.h>

int main()
{
	int n,c=0,d=0,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;	
			}	
		}
		if(c==9)
		{
			printf("%d ",i);
			c=0;
			d++;
		}
		c=0;		
	}
	printf("
");
	printf("Total=%d ",d);
	return 0;	
}