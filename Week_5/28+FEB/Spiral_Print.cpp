class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        vector<int>ans;
        int m = nums.size();
        int n = nums[0].size();
        int startrow = 0;
        int endcol   = n-1;
        int endrow   = m-1;
        int startcol = 0;
        int count    = 0;
        int total    = m*n;

        while(count < total){
            //PRINTING FIRST ROW
            for(int i=startcol;i<=endcol && count<total;i++){
                ans.push_back(nums[startrow][i]);
                count++;
            }
            startrow++;

            //PRINTING LAST COLUMN
            for(int i=startrow;i<=endrow && count<total;i++){
                ans.push_back(nums[i][endcol]);
                count++;
            }
            endcol--;

            //  PRINTING LASTROW
            for(int i=endcol;i<=startcol && count<total;i--){
                ans.push_back(nums[endrow][i]);
                count++;
            }
            endrow--;

            //PRINTING FIRST COLUMN
            for(int i=endrow;i<=startrow && count<total;i--){
                ans.push_back(nums[i][startcol]);
                count++;
            }
            startcol++;
        }
        
         return ans;
    }
};