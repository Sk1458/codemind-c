#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(i!=j)
                {
                    arr[j]=0;
                }
            }
        }
        if(arr[i]!=0)
        {
            printf("%d %d ",arr[i],count);
        }
    }
    return 0;
}