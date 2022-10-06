#include<stdio.h>

int main()
{
    int s,i;
    float sum=0;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%.2f",sum/s);
    
    return 0;
}
