#include<stdio.h>

int main()
{
    int n,m,max=0,sum=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0,sum,i=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
    }
    return 0;
}