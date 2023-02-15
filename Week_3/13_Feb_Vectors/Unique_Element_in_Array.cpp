#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    
    int n;
    cout<<"Enter the size of vector ";
    cin>> n;
    vector <int> arr(n);
    for(int i=0; i<arr.size();i++){
        cin>> arr[i];
    }

    cout<<"The unique element is  "<<  findUnique(arr);
return 0;
}