class Solution {
public:
    int firstocc(vector<int>nums , int target){
        int s = 0, e = nums.size() -1;
        int m = s + (e - s) /2;
        int fo = -1;
        while(s <= e){
            if(nums[m] == target){
                fo = m;
                e = m-1;
            }
            else if(nums[m] < target) s = m+1;
            else e = m-1;
        }
        return fo;
        //LAST OCCURRENCE
        int lastocc(vector<int> nums , int target){
            int s = 0, e = nums.size() -1;
        int m = s + (e - s) >>2;
        int fo = -1, lo = -1;
        while(s <= e){
            if(nums[m] == target){
                lo = m;
                s=m+1;
            }
            else if(nums[m] < target) s = m+1;
            else e = m-1;
        }
            return lo;
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> ans;
        // int s = 0, e = nums.size() - 1;
        // int m = s + ( e - s ) >>1;
// //MANUAL BINARY SEARCH [TIMME LIMIT EXCEEDED]
//         int firstOcc= -1 , lastOcc = -1;
//         //FIRST OCCURRENCE  
//         while(s <= e){
//             if(nums[m] == target){
//                 firstOcc = m;
//                 e = m - 1;
//             }
//             else if(nums[m] < target) s = m + 1;
//             else e = m - 1;
//         }
//         //LAST OCCURRENCE
//         while(s <= e){
//             if(nums[m] == target){
//                 lastOcc = m;
//                 e = m-1;
//             }
//             else if(nums[m] < target) s = m + 1;
//             else e = m-1;
//         }
//         ans.push_back(firstOcc);
//         ans.push_back(lastOcc);
//         return ans;
        
        ans.push_back(firstocc(nums,target));
        ans.push_back(lastocc(nums,target));
        return ans;
        
        
    }
    
};