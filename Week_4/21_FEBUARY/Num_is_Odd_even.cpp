#include<iostream>
using namespace std;

bool numOddEven(int num){
    if(num % 2 == 0) return true;
    else return false;
}

int main(){
    int num;
    cout<<"Enter the nunmber "; cin>>num;
    bool ans = numOddEven(num);
    if(ans) cout<<num<<" is even."<<endl;
    else cout<<num<<" is odd."<<endl;


return 0;
}