#include<stdio.h>

int main()
{
    int s,i;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=s-1;i>=0;i--)
    {
        if(a[i]%2==0)
        {
            printf("%d",i);
            break;
        }
    }
    
    return 0;
}