#include<stdio.h>

int main()
{
    int s,i,sum=0;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
        else
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}