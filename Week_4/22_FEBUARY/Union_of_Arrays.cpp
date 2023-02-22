#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,2,2,3,4,5,6,7,8,8,9};
    vector<int>brr{10,6,78,98,45,6,67,12};
    vector<int>uni;
    for(int i=0;i<arr.size();i++){
        uni.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
        uni.push_back(brr[i]);
    }

    for(int i=0;i<uni.size();i++) cout<<uni[i]<<" ";
    return 0;
}