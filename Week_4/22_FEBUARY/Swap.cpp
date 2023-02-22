#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9};
    int start = 0; int end = arr.size()-1;
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
        end--;start++;
    }

    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}