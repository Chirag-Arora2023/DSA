#include<iostream>
#include<vector>
using namespace std;

int Unique(vector<int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    vector<int> arr{1,1,2,2,3,3,4,4,5,6,7,6,7,8,9,8,9};
    cout<<"Unique element in the given array is "<< Unique(arr);
return 0;
}