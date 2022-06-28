#include<stdio.h>

int main()
{
    int x=0,y=0;
    char arr[20];
    scanf("%[^
]s",arr);
    for(int i=0;i<20;i++)
    {
        if(arr[i]=='z')
        {
            x++;
        }
        else if(arr[i]=='o')
        {
            y++;
        }
    }
    if(x*2==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}