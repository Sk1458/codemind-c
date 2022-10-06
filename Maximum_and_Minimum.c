#include<stdio.h>
#include<limits.h>

int main()
{
    int n,min=INT_MAX,max=INT_MIN;
    scanf("%d",&n);
    int arr[n],k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
           if(max<c) 
           {
               max=c;
           }
           if(min>c)
           {
               min=c;
           }
           k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else{
        printf("%d %d",min,max);
    }
    return 0;
}