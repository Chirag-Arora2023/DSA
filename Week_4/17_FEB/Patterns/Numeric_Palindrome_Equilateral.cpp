#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int num1=1;
        int num2=i;
        for(int s=0;s<n-i-1;s++) cout<<"  ";
        for(int j=0;j<i+1;j++) cout<<num1++<<" ";
        for(int j=0;j<i;j++) cout<<num2--<<" ";

        cout<<endl;
    }
return 0;
}