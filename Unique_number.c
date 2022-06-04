#include<stdio.h>
#include<string.h>

int main()
{
    char num[100];
    int i,j,s,c=0;
    scanf("%[^
]s",&num);
    s=strlen(num);
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(num[i]==num[j])
            {
                c++;
            }
        }
    }
    if(c>0)
    {
       printf("Not Unique Number"); 
    }
    else
    {
        printf("Unique Number");
    }
    return 0;
}