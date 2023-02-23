class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       //WE ARE MODIFYING THE ARRAY WHICH IS NOT ALLOWED
        // int ans = -1;
        // for(int i=0;i<nums.size();i++){
        //     int index = abs(nums[i]);

        //     if(nums[index] < 0){
        //         ans = index;
        //         break;
        //     }

        //     nums[index] *= -1;
        // }
        // return ans;
        
        //POSITIONING APPROACH(ALSO MODIFIES ARRAY )
        while(nums[0]  !=  nums[nums[0]]){
            swap(nums[0] , nums[nums[0]]);
        }
        return nums[0];
        //BINARY SEARCH APPROACH FOR NOT MODIFYING THE ARRAY IN THE FUTURE
    }
};