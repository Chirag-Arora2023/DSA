#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void maxSum(vector<int>& arr , int i , int sum , int& maxi){
    if(i >= arr.size()){
        maxi = max( maxi , sum);
        return ;
    }

    
        //include
        maxSum(arr,i+2,sum+arr[i] , maxi);

        //excluding
        maxSum(arr,i+1 , sum , maxi);
    
}

int main(){
    vector<int> arr{2,1,4,9};
    int i=0;
    int sum=0;
    int maxi=INT_MIN;
    maxSum(arr,i,sum,maxi);
    cout<<"Maximum sum = "<<maxi<<endl;
    return 0;
}