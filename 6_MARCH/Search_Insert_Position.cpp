#include<iostream>
#include<vector>
using namespace std;

 int searchInsert(vector<int>& nums, int target) {
        int s=0 , e = nums.size()-1 , m=0;
        int ans =-1;
        while(s <= e){
            m = s + (e-s)/2;
            if(nums[m] == target){
                 return m;
                 break;
            }
            else if(nums[m] < target){
                ans = m;
                s = m+1;
            }
            else e = m-1;
        }
        return ans+1;
    }