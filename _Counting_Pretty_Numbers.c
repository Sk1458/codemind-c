#include<stdio.h>

int main()
{
    int T,k,l,i,c=0;
    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d %d",&k,&l);
        for(i=k;i<=l;i++)
        {
            if(i%10==2 or i%10==3 or i%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
        c=0;
        T--;
    }
    return 0;
}
