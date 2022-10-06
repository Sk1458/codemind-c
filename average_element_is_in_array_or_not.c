#include<stdio.h>
int main()
{
    int n,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(sum/n==arr[i])
        c++;
    }
    if (c==0)
    printf("False");
    else
    printf("True");
}