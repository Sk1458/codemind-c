#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j+i==n-1 || i==j )
            {
                printf("x");
            }
            else{
                printf("0");
            }
        }
        printf("
");
    }
}