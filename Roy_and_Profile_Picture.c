#include<stdio.h>

int main()
{
	int l,n,w,h;
	scanf("%d",&l);
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d %d",&w,&h);
		if(w==l&&h==l)
		{
			printf("ACCEPTED
");
		}
		if(w>l&&h>l)
		{
			if(w==h)
			{
				printf("ACCEPTED
");
			}
			else
			{
				printf("CROP IT
");
			}
		}
		if(w>l&&h==l)
		{
			printf("CROP IT
");
		}
		if(w==l&&h>l)
		{
			printf("CROP IT
");
		}
		if(w<l||h<l)
		{
			printf("UPLOAD ANOTHER
");
		}
		n--;	
	}
	return 0;
}