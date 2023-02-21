#include<iostream>
using namespace std;

bool checkPrime(int num){
        bool ans ;
    for(int i=2;i<num;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the number "; cin>>num;

    bool res = checkPrime(num);
    if(res== false) cout<<"Not prime";
    else cout<<"Prime";

    return 0;
}