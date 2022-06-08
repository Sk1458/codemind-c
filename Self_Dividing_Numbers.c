#include<stdio.h>

int main()
{
	int a,b,temp,samp,c=0,rem,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		temp=i;
		while(temp>0)
		{
			rem=temp%10;
			if(rem==0)
			{
				c++;
				break;
			}
			else if(i%rem!=0)
			{
				c++;
				break;
			}
			temp=temp/10;
		}
		if(c==0)
		{
			printf("%d ",i);	
		}
		c=0;				
	}
	return 0;
}