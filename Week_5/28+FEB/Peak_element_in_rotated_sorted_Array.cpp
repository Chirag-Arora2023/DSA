#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int pivot(vector<int> nums){
    int s = 0, e = nums.size()-1;
    int m = s + ( e - s)/2;
    int ans = -1;

    while(s < e){
        if(nums[m] < nums[m+1] && nums[m] < nums[m-1]){
            ans = nums[m];
        }
        else if(nums[m] < nums[0]){
            e = m;
        }
        else s = m+1;
    }
    return ans;
}

int main(){
    vector<int> nums{7,9,1,2,3};
    int n = nums.size();
    int res = pivot(nums);
    cout<<"all good? " <<res;

    return 0;
}