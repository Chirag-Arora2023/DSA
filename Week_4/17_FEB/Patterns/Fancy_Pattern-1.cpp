#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+3;j++)cout<<"*";
        for(int j=0;j<i+1;j++){
            cout<<i+1;
            if(j==i) break;
            cout<<"*";
        }
        for(int j=0;j<n-i+3;j++)cout<<"*";
        cout<<endl;
    }
}