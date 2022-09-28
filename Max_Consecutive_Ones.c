// program to find the maximum consecutive numbers present in a given array
#include<stdio.h>

int main()
{
    int s,i,store=0,c=0;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
    	scanf("%d",&a[i]);
    	if(a[i]==1)
	    {
	        c++;
	    }
	    else if(a[i]==0)
	    {
	        if(store<=c)
	        {
	            store=c;
	            c=0;
	        }
	    }
	}
	if(store<=c)
	{
	    store=c;
	}
	printf("%d",store);
    return 0;
}