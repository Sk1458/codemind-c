#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],c=0;
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		c++;
	}
	if(c==n-1)
	{
		printf("yes");
	}
	else{
		printf("no");
	}
}