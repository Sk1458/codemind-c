#include<stdio.h>

int main()
{
    int n,b=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1 || arr[i]==0)
        b++;
    }
    if(b==n)
    printf("True");
    else
    printf("False");
    return 0;
}