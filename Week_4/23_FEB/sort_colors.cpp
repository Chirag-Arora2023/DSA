class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0 ,m = 0,  h = nums.size() - 1;
        //TIME LIMIT EXCEEDED
        // while(l < h){
        //     if (nums[l] == 0) l++;
        //     else if(nums [h] == 2)  h--;

        //     else swap( nums[l] , nums [h]);
        // }
        while(m <= h){
            if(nums[m] == 1) m++;
            else if(nums[m] == 0 ){
                swap( nums[m] , nums[l]);
                m++; l++;
            }
            else if(nums[m] == 2) {
                swap(nums[m] , nums[h]);
                h--;
            }
        }

    }
};