#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int Union(vector<int>arr,vector<int>brr){
    for(int i=0;i<arr.size();i++){
        
    }
}

int main(){
    // int n;
    // cout<<"Enter the size of first vector";
    // cin>>n;
    vector<int>arr,vector<int>brr;
    cout<<"Enter the elements of first vector"<<endl;
    for(int i=0;i<arr.size();i++) cin>>arr[i];
    cout<<"Enter the elements of second vector"<<endl;
    for(int i=0;i<brr.size();i++) cin>>brr[i];

    int result=Union(arr,brr);
    cout<<result;
    

    
    return 0;
}