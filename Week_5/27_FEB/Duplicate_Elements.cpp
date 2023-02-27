#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int findDuplicates(vector<int> nums) {
    vector<int>ans;
    int n = nums.size();
    unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second > 1){
                cout<<i.first<<" ";
            }
        }
return 0;
}

int main(){

    vector<int>arr {4,3,2,7,8,2,3,1};
    int ans = findDuplicates(arr);
    

    return 0;
}