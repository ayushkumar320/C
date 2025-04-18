#include<iostream>
using namespace std;

int main(void){
    int a = 12345;
    int sum = (a/10000) + (a/1000)%10 + (a/100)%10 + (a/10)%10 + a%10;
    cout<<sum;
    return 0;
}