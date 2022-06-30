#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<3)
    {
        printf("The pattern is not possible");
    }
    else{
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(int i=n-1;i>0;i--)
        {
            for(int j=0;j<i;j++)
            {
                printf("*");
            }
            printf("
");
        }
    }
}