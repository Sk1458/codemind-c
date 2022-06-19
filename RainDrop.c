#include<stdio.h>

int main()
{
	int k;
	scanf("%d",&k);
	if(k%3==0||k%5==0||k%7==0)
	{
		if(k%3==0)
		{
			printf("Pling");
		}
		if(k%5==0)
		{
			printf("Plang");
		}
		if(k%7==0)
		{
			printf("Plong");
		}
	}
	else
	{
		printf("%d",k);
	}
	return 0;
}