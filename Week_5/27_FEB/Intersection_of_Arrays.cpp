#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int> s;
        int i=0 , j=0;
        int m = nums1.size();
        int n = nums2.size();
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        while(i < m  &&  j < n ){
            if(nums1[i] == nums2[j]){
                s.insert(nums1[i]);
                i++; j++;
            }
            else if( nums1[i] < nums2[j])
                i++;
            else   j++;
        }
        for(auto it: s){
            ans.push_back(it);
        }
        return ans;
 }
int main(){
    vector<int> num1{1,2,3,4,5,7,5,1};
    vector<int> num2 {2,4,4,6,8,1};
    intersection(num1 , num2);

    return 0;
}