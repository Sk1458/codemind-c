#include<stdio.h>
#include<math.h>

int main()
{
	int t,k,sqr;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&k);
		sqr=pow(k,0.5);
		if(sqr*sqr==k)
		{
			printf("True
");	
		}
		else
		{
			printf("False
");
		}
		sqr=0;
		t--;		
	}
	return 0;
}