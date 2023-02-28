#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums{ -1,0,1,2,-1,4};
    set<vector<int>>s;
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i=0;i<n-2;i++){
            int l = i+1 , h = n-1 ;
            //cout<<"For iteration i ="<<i<<" nums[l] = " <<nums[l]<<" "<<nums[h]<<endl;
            while(l < h){
                if((nums[i]+nums[l]+nums[h] == 0) && i!=l && l!=h && i!=h){
                    s.insert({nums[i] , nums[l] , nums[h]});
                    l++; h--;
                }
                else if(nums[i] + nums[l] + nums[h] < 0)
                    l++;
                else h--;
            }
        }

    return 0;
}