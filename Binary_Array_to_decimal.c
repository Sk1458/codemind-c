#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],temp=n-1,sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i]*pow(2,temp);
        temp--;
    }
    printf("%d",sum);
    return 0;
}