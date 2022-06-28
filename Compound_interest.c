#include<stdio.h>
#include<math.h>

int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    double ci=pow((1+r/100.00),t);
    printf("%.2f",p*ci);
    return 0;
}