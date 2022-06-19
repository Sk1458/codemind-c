#include<stdio.h>

int main()
{
	int h,sn,sp;
	scanf("%d%d%d",&h,&sn,&sp);
	//printf("%d %d %d",h,sn,sp);
	if(h>50 && sn>60 && sp>100)
	{
		printf("%d",10);
	}
	else if(h>50&&sn>60&&sp<=100)
	{
		printf("%d",9);
	}
	else if(sn>60&&sp>100&&h<=50)
	{
		printf("%d",8);
	}
	else if(h>50&&sp>100&&sn<=60)
	{
		printf("%d",7);
	}
	else if(h>50&&sn<=60&&sp<=100)
	{
		printf("%d",6);
	}
	else if(h<=50&&sn>60&&sp<=100)
	{
		printf("%d",6);
	}
	else if(h<=50&&sn<=60&&sp>100)
	{
		printf("%d",6);
	}
	else
	{
		printf("%d",5);
	}
	
	return 0;
}