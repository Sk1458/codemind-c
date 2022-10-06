#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],d=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            d++;
        }
    }
    if(d==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}