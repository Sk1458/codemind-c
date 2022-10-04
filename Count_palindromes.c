#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        int temp=arr[i],rev=0;
        while(temp)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
}