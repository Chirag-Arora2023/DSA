#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int count=1;
        if(i==n-1){
            for(int j=0;j<n;j++){
                cout<<count++;
                if(j==i) break;
                cout<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<n-i-1;j++) cout<<" ";
            for(int j=0;j<2*i+1;j++){
                if(j==0 )cout<<j+1;
                else if(j==2*i)cout<<i+1;
                else cout<<" ";
            }
            cout<<endl;
        } 

    }
    return 0;
}