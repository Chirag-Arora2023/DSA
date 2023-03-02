#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int>arr , int n , int k, int mid){
    int time = 0;
    int paintercount =1;

    for(int i=0;i<n;i++){
        if(time + arr[i] <= mid)
            time += arr[i];
        else{
            paintercount++;
            if(paintercount>k || arr[i]>mid)
                return false;
            time = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int ans=-1;
    int n = boards.size();
    int sum=0,mid=0;
    for(int i=0;i<n;i++) sum += boards[i];
    int e = sum;
    while(s <= e){
        mid = s + (e-s)/2;
        if(ispossible(boards , n , k , mid)){
            ans = mid;
            e = mid-1;
        }
        else s = mid+1;
    } 
    return ans;
}