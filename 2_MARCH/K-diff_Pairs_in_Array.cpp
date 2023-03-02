#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
//TWO POINTER APPROACH
        sort(nums.begin() , nums.end());
        set<pair<int,int>>ans;
        int l = 0;
        int h = l+1;
        while(l <= h && h<nums.size()){
            if(l == h) h++;
            else if(nums[h] - nums[l] == k){
                ans.insert({nums[l] , nums[h]});
                l++; h++;
            }
            else if(nums[h] - nums[l]  > k ) l++;
            else h++;
        }
        return ans.size();
    }
};