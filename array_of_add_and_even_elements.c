#include<stdio.h>

int main()
{
    int n,x=0,y=0;
    scanf("%d",&n);
    int arr[n],ev[n],od[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]%2)
        {
            y++;
        }
        else if(arr[i]%2==0)
        {
            x++;
        }
    }
    ev[x],od[y];
    for(int i=0,j=0,h=0;i<n;i++)
    {
        if (arr[i]%2)
        {
            od[j]=arr[i];
            j++;
        }
        else if(arr[i]%2==0)
        {
            ev[h]=arr[i];
            h++;
        }
    }
    for(int i=0;i<y;i++)
    {
        printf("%d ",od[i]);
    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",ev[i]);
    }
    return 0;
}