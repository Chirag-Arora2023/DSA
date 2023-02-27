#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
//BRUTE FORCE  NESTED LOOPS
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target)
                { ans.push_back(i);
                    ans.push_back(j);}
            }
        }
        return ans;
}

int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,7,6,5,9,10};
    
    int target;
    cout<<"Enter the target sum "; cin>> target;

    twoSum(arr , target);
    
    

    return 0;
}