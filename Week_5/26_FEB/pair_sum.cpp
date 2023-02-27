#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,2,3,4,7,9};
    vector<int>brr{ 4,7,9,1,23,7,8,10};
    int target;
    cin>>target;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i] + brr[j] == target){
                cout<<"{"<<arr[i]<<" , "<<brr[j]<<"}  ";
            }
        }
    }

    return 0;
}