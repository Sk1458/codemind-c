#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0,x=n;i<n;x--,i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i||i+j==n-1)
            printf("%d ",x);
            else
            printf(" ");
        }
        printf("
");
    }
}