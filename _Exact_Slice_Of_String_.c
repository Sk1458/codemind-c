#include<stdio.h>

int main()
{
    int a,b;
    char arr[10000];
    scanf("%[^
]s",arr);
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}