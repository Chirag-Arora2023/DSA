#include<iostream>
#include<vector>
using namespace std;

int LastOcc(vector<int> arr , int target ){
    int s=0 , e = arr.size() - 1, ti = -1;
    int m = s + ( e - s) / 2;

    while( s <= e){
        if( arr[m] == target){
            ti = m;
            s = m + 1;
        }
        else if( arr[m] < target)
            s = m + 1;
        else{
            e = m  - 1 ;
        }
        m = s + ( e - s ) / 2 ;
    }
    return ti;
    //Target not found
    //return -1;
}

int main(){

    vector<int> arr{1,1,1,2,2,3,5,5,5,5,7,7,10};
    int target;
    cout<<"Enter the target "; cin>>target;
    int ans = LastOcc( arr, target );
    cout<<ans;
    // if( ans != -1)
    //     cout<<"Last occurence of target element is at index "<<ans<<endl;
    // else cout<<"Target not found."<<endl;

return 0;
}