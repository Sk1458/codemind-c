#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    if(n%2){
        printf("0");
    }
    return 0;
}