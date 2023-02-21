#include<iostream>
using namespace std;

int Fact(int num){
    int ans = 1;
    for(int i=1; i<=num;i++){
         ans = ans * i; 
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number "; cin>>num;
    
    cout<<Fact(num);

    return 0;
}