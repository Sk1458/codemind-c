#include<stdio.h>
#include<math.h>

int main()
{
    int number,sum=0,temp=0;
    scanf("%d",&number);
    while(sum!=1 || sum!=7)
    {
        while(number)
        {
            temp+=pow(number%10,2);
            number/=10;
        }
        if(temp>9)
        {
            number=temp;
            temp=0;
        }
        else if(temp==1)
        {
            printf("True");
            break;
        }
        else if(temp==7)
        {
            printf("True");
            break;
        }
        else if(temp<10)
        {
            printf("False");
            break;
        }
    }
    return 0;
}