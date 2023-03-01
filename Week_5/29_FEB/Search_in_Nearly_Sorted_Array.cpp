#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

bool search(vector<int> arr , int target){
    int s=0 , e = arr.size() -1;
    int m=0;
    while(s <= e){
        m = s + (e-s)/2;
        if(arr[m] == target) return m;
        else if(arr[m-1] > s && arr[m-1] == target) return m-1;
        else if(arr[m+1] < e && arr[m+1] == target) return m+1;
        else if(arr[m] < target ) s = m+2;
        else e = m-2;
    }
    return -1;
}

int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target;
    cout<<"Enter the target value "; cin>>target;
    bool ans = search(arr , target);
    if(ans) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}