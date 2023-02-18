#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int> arr,int target){
    int s = 0 , e = arr.size() - 1 , m , ans;
    m= s + (e - s )/2;
    while (s<=e){
        if(arr[m] == target){
            ans = m; 
            e = m - 1;
        }
        else if (target < arr[m])
            e = m - 1;
        else s= m+1;

        m = s + (e - s ) / 2;
    }
    return ans;
}
int main(){
    int target;
    cout<<"Enter the element "; cin>>target;
    vector<int> arr{1,2,3,3,3,3,5,5,5,5,5,5,6,6,6,7,7,8,8,10};
    int size=arr.size();
    int ans= firstOcc(arr,target);
    cout<<ans;
return 0;
}