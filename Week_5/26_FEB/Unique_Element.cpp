//#include<bits/stdc++>
#include<iostream>

using namespace std;

int main(){
    int arr[100];
    int n; int ans =0;
    cout<<"Enter the size of array "; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];

     for(int i=0;i<n;i++){
        ans ^= arr[i];
     }
    cout<<"Unique element is "<<ans;
    return 0;
}