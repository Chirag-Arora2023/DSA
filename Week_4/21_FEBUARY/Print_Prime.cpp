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
    int n;
    cout<<"Enter the number "; cin>>n;

    for(int i=2;i<=n;i++){
        bool isiprime= checkPrime(i);
        if(isiprime){
        cout<<i<<" ";}
    }



    return 0;
}