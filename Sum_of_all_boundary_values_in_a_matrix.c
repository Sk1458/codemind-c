#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m],sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==0 || j==0 || i==n-1 || j==m-1){
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}