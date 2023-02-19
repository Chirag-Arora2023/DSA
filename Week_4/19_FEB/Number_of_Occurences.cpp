#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstOcc(vector<int> arr, int target){
    int s=0, e= arr.size()-1 , ans1 = -1;
    int m = s + (e- s)/2;
    while(s<=e){
        if(arr[m] == target){
            ans1 = m;
            e = m-1;
        }
        else if(arr[m] < target) s = m+1;
        else e = m - 1;

        m = s + (e-s)/2;
    }
    return ans1;
}

int lastOcc(vector<int> arr , int target){
    int s=0, e= arr.size()-1 , ans2;
    int m = s + (e- s)/2;

    while(s<=e){
        if(arr[m] == target){
            ans2 = m;
           s = m + 1;
        }
        else if(arr[m] < target) s = m+1;
        else e = m - 1;
        m = s + (e-s)/2;
    }
    return ans2;
}

int main(){

    vector<int> arr{1,1,1,1,2,2,2,3,3,3,3,5,5,5,6,6,8,9,9,9,10};
    int target;
    cout<<"Enterr the target "; cin>>target;
    int ans = firstOcc(arr,target);
    //cout<<ans;
    cout<<"Number of occurences of target is "<<lastOcc(arr, target) -  firstOcc(arr, target ) + 1;
    

return 0;  
}