#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,area,s;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=pow(s*(s-a)*(s-b)*(s-c),0.5);
    printf("%.2f",area);
    return 0;
}