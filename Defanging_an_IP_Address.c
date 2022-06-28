#include<stdio.h>

int main()
{
    char arr[100];
    scanf("%[^
]s",arr);
    for(int i=0;arr[i]!=NULL;i++)
    {
        if(arr[i]=='.')
        printf("[.]");
        else
        printf("%d",arr[i]-48);
    }
    return 0;
}