#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

bool binarySearch(vector<vector<int>> nums ,int rows,int cols , int target){
    int s=0 , e = rows*cols -1;
    while(s <= e){
        int m = s + (e-s)/2;
        int rowindex = m/cols;
        int colindex = m%cols;

        if(nums[rowindex][colindex] == target) return true;
        else if(nums[rowindex][colindex] < target) s = m+1;
        else e = m-1;
    }
    return false;
}

int main(){
    vector<vector<int>>arr{ {1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16} };
    int rows = arr.size();
    int cols =arr[0].size();
    int target =16;
    bool ans = binarySearch(arr,rows,cols,target);
    if(ans) cout<<"Found"<<endl;
    else cout<<"Not Found "<<endl;
    return 0;
}