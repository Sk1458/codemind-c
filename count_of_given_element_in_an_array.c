#include<stdio.h>
int main()
{
    int n,x,d,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&d);
    for(int i=0;i<n;i++)
    {
        if(d==arr[i])
        c++;
    }
    printf("%d",c);
}