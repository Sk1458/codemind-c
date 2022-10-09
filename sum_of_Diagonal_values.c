#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m],left=0,right=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
                left+=arr[i][j];
            }
            else if(i+j==n-1)
            {
                right+=arr[i][j];
            }
        }
    }
    printf("%d",left+right);
    return 0;
}