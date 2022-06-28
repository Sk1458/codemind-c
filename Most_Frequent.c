#include<stdio.h>

int main()
{
    int n,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        one++;
        else if(arr[i]==2)
        two++;
        else if(arr[i]==3)
        three++;
        else if(arr[i]==4)
        four++;
        else if(arr[i]==5)
        five++;
        else if(arr[i]==6)
        six++;
        else if(arr[i]==7)
        seven++;
        else if(arr[i]==8)
        eight++;
        else if(arr[i]==9)
        nine++;
        else if(arr[i]==0)
        zero++;
    }
    if(     one>=zero   && one>=two  && one>=three  && one>=four   && one>=five && one>=six     && one>=seven   && one>=eight   && one>=nine)
    printf("1");
    else if(two>=zero   && one<=two   && two>=three   && two>=four   && two>=five   && two>=six   && two>=seven   && two>=eight   && two>=nine)
    printf("2");
    else if(three>=zero && three>=two && one<=three   && three>=four && three>=five && three>=six && three>=seven && three>=eight && three>=nine)
    printf("3");
    else if(four>=zero   && four>=two  && four>=three  && one<=four   && four>=five  && four>=six  && four>=seven  && four>=eight  && four>=nine)
    printf("4");
    else if(five>=zero   && five>=two  && five>=three  && five>=four  && one<=five   && five>=six  && five>=seven  && five>=eight  && five>=nine)
    printf("5");
    else if(six>=zero    && six>=two   && six>=three   && six>=four   && six>=five   && one<=six   && six>=seven   && six>=eight   && six>=nine)
    printf("6");
    else if(seven>=zero  && seven>=two && seven>=three && seven>=four && seven>=five && seven>=six && one<=seven   && seven>=eight && seven>=nine)
    printf("7");
    else if(eight>=zero  && eight>=two && eight>=three && eight>=four && eight>=five && eight>=six && eight>=seven && one<=eight   && eight>=nine)
    printf("8");
    else if(nine>=zero   && nine>=two  && nine>=three  && nine>=four  && nine>=five  && nine>=six  && nine>=seven  && nine>=eight  && nine>=one)
    printf("9");
    else if(one<=zero    && zero>=two  && zero>=three  && zero>=four  && zero>=five  && zero>=six  && zero>=seven  && zero>=eight  && zero>=nine)
    printf("0");
    return 0;
}