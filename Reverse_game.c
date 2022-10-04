#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0,rev=0;i<n;i++){
        rev=0;
        scanf("%d",&arr[i]);
        while(arr[i])
        {
            rev=rev*10+arr[i]%10;
            arr[i]/=10;
        }
        printf("%d ",rev);
    }
}