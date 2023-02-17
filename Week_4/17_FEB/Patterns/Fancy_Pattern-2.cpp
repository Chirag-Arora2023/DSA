#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int num1= 1;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
            cout<<num1++;
            if(j==i) break;
            cout<<"*";
        }
        cout<<endl;
    }
    

    
    return 0;
}