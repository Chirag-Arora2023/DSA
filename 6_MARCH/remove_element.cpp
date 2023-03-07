#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>nums{0,1,2,2,3,0,4,2};
    int val = 2;
    int h=nums.size() -1;
    cout<<"value of h = "<<h;
        int l = 0;
        int n =nums.size();
        for(int l=0;l<n;l++){
            cout<<"for l = "<<l<<endl;
            //if(nums[h] == val){h--;cout<<"h-- "<<"new h = "<<h<<endl;}
            if(nums[l] == val )
            nums[l] = nums[h--];
            cout<<"swapped  "<<nums[h]<<" with "<<nums[l]<<endl;;
        }
        cout<<endl;
        cout<<h;
    return 0;
}