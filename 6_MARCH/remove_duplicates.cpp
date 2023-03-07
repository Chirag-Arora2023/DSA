#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int l = 0 , h = 1;int ans = 0;
        int n=nums.size();
        int max = nums[n-1];
        while(l<=max){
            if(n==1) return 1;
            else if(nums[h]>nums[l]){
                swap(nums[h] , nums[l+1]);
                l++;h++;
                cout<<l<<endl;
            }
            else if(nums[h]==nums[l])h++;
            
        }
        return l+1;
    }

int main(){
    vector<int>arr{0,0,1,1,1,2,2,3,3,4};
    int length = removeDuplicates(arr);
    for(int i=0;i<length;i++) cout<<arr[i]<<" ";
    return 0;
}