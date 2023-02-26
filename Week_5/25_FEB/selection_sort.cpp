#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{1,3,5,3,4};
    //SORT THE ARRAY USING SELECTION SORT
    int size = arr.size();

    for(int i=0;i<size;i++){
        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i] , arr[minIndex]);
    }
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return 0;
}