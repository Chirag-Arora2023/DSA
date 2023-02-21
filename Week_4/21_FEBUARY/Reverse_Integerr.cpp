#include<iostream>
using namespace std;

int main(){
    int n, ans=0, rem=0 ;
    cout<<"Enter the number ";cin>>n;
    bool isNeg= 0;
    if(n< 0){
        isNeg = 1;
        n = -n;
    } 

    while(n > 0){
        int digit = n % 10;
        ans = ans * 10 + digit;  //Signed integer overflow.
        n = n/ 10;

    }
    return isNeg ? -ans : ans;
    cout<< ans;
}