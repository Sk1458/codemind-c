#include<stdio.h>

int main()
{
    int n,m,max=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0,sum;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
    }
    printf("%d",max);
    return 0;
}