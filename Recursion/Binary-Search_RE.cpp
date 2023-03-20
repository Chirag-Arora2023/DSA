#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr,int s,int e,int& target){
    if(s > e)return -1;

    int m=s+(e-s)/2;

    if(arr[m]==target)return m;
    else if(arr[m]<target){
        binarySearch(arr,m+1,e,target);
    }
    else binarySearch(arr,s,m-1,target);
}

int main() {
    vector<int> arr{1,2,4,6,8,9,65,87,654,3241,23422};
    int s=0,e=arr.size()-1;
    int target=65;
    int ans = binarySearch(arr,s,e,target);
    if(ans==-1)cout<<"Target not Found."<<endl;
    else cout<<"target found at: "<<ans<<endl;

  return 0;
}