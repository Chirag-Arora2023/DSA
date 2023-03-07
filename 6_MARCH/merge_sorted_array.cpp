#include<iostream>
#include<vector>
#include<algortihm>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m;
        int j=0;
        for(int i=m;i<(m+n);i++){
            nums1[i] = nums2[j++];
        }
        sort(nums1.begin() , nums1.end());
        // return nums1;
    }
    int main(){}
