#include<stdio.h>
#include<string.h>

int main()
{
    char x[10],y[10];
    int out[20]={0},sum,k,q=0,d;
    scanf("%s%s",x,y);
    int m=strlen(x);
    int n=strlen(y);
    for(int i=m-1;i>=0;i--)
    {
        k=q;
        d=0;
        for(int j=n-1;j>=0;j--)
        {
            sum=(x[i]-'0')*(y[j]-'0')+out[k]+d;
            if(sum>9)
            {
                out[k]=sum%10;
                d=sum/10;
                k++;
            }
            else
            {
                out[k]=sum;
                d=0;
                k++;
            }
        }
        if(d!=0)
        {
            out[k]=d;
            k++;
        }
        q++;
    }
    for(int i=k-1;i>=0;i--)
    {
        printf("%d",out[i]);
    }
    return 0;
}