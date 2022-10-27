#include<iostream>
using namespace std;

int spy_number(int num){
    int temp,sum=0,prod=1;
    temp=num;
    while(num!=0){
        sum+=num%10;
        prod*=num%10;
        num=num/10;
    }
    if(sum==prod) return 1;
    else return 0;
}

int main(){
    int num;
    cin>>num;
    if(spy_number(num)) cout<<"Spy Number";
    else cout<<"Not Spy Number";
    return 0;
}