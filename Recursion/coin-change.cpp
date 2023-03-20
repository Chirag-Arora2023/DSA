#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;


int solve(vector<int>& arr , int sum){
    if(sum==0) return 0;
    if(sum<0)return INT_MAX;

    int mini = INT_MAX;

    for(int i=0;i<arr.size();i++){
        int ans = solve(arr, sum - arr[i]);
        if(ans != INT_MAX){
            mini = min(ans+1,mini);
        }
    }
    return mini;
}


int main() {
    vector<int> arr{1,2,5,10};
    int sum=20;
    int ans = solve(arr,sum);
    cout<<"minimum number of coins = "<<ans<<endl;
  return 0;
}