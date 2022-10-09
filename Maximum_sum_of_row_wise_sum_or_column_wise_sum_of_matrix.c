#include<stdio.h>

int main()
{
    int n,m,r_max=0,c_max=0;
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
        if(r_max<sum)
        {
            r_max=sum;
        }
    }
	 for(int j=0,sum,i=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
        if(c_max<sum)
        {
            c_max=sum;
        }
    }
    if(c_max>r_max){
        printf("%d",c_max);
    }
    else{
        printf("%d",r_max);
    }
    return 0;
}