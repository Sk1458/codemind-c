#include<stdio.h>

int main()
{
    int size,c=0,avg,s=0,i;
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        s+=a[i];
    }
    avg=s/size;
    for(i=0;i<size;i++)
    {
        if(a[i]<=avg)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}