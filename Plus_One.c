#include<stdio.h>

int main()
{
    int n,number=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        number=number*10+arr[i];
    }
    number+=1;
    int temp=number,d=0;
    while(temp)
    {
        temp/=10;
        d++;
    }
    int res[d];
    for(int i=0;i<d;i++)
    {
        res[i]=number%10;
        number/=10;
    }
    for(int i=d-1;i>=0;i--)
    {
        printf("%d ",res[i]);
    }
    return 0;
}