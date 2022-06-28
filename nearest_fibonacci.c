#include<stdio.h>
int main()
{
	int f=0,s=1,n=0,num;
	scanf("%d",&num);
	while(num>n)
	{
		n=f+s;
		f=s;
		s=n;
	}
	if(num-f<s-num)
	{
		printf("%d",f);
	}
	else if(num-f==s-num)
	{
		printf("%d %d",f,s);
	}
	else
	{
		printf("%d",s);
	}
}