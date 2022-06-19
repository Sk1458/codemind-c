#include<stdio.h>

int main()
{
	int t,k,c=1,i;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&k);
		for(i=1;i<=k;i++)
		{
			c*=i;		
		}
		printf("%d
",c);
		c=1;
		t--; 	
	}	
	return 0;
}