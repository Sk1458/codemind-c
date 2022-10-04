#include<stdio.h>
int main()
{
    int n,c=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0,d;i<n;i++)
    {
        d=0;
        scanf("%d",&arr[i]);
        int temp=arr[i];
        while(temp)
        {
            d++;
            temp/=10;
        }
        if(d>c){
            c=d;
        }
    }
    for(int i=0,d;i<n;i++)
    {
      d=0;
        scanf("%d",&arr[i]);
        while(arr[i])
        {
            d++;
            arr[i]/=10;
        }
        if(d==c){
            count++;
        }   
    }
    printf("%d",count);
}