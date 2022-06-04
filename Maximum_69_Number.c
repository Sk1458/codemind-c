#include<stdio.h>
#include<string.h>

int main()
{
    char n[100];
    scanf("%[^
]c",&n);
    int i,s;
    s=strlen(n);
    for(i=0;i<s;i++)
    {
        if(n[i]=='6')
        {
            n[i]='9';
            break;
        }
    }
    printf("%s",n);
    
    return 0;
}