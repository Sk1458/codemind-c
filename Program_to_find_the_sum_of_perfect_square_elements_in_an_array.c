#include<stdio.h>
#include<math.h>

int isps(int number)
{
    int ivar;
    float fvar;
    fvar=sqrt((double)number);
    ivar=fvar;
    if(ivar==fvar)
    return number;
    else
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+isps(arr[i]);
    }
    printf("%d",sum);
    return 0;
}