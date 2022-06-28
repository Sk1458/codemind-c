#include<stdio.h>

int main()
{
    char arr[100];
    int count=0,n;
    scanf("%d",&n);
    while(n)
    {
        count=0;
        scanf("
%[^
]s",arr);
        for(int i=0;arr[i]!=NULL;i++)
        {
            if(arr[i]=='0'||arr[i]=='1'||arr[i]=='2'||arr[i]=='3'||arr[i]=='4'||arr[i]=='5'||arr[i]=='6'||arr[i]=='7'||arr[i]=='8'||arr[i]=='9')
            {
                count++;
            }
        }
        if(count>0)
        printf("Yes
");
        else
        printf("No
");
        n--;
    }
    return 0;
}