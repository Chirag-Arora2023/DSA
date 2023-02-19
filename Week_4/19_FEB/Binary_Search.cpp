#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr , int target){
    int s = 0;
    int e = arr.size() - 1;
    int m = s + ( e - s) / 2;

    while(s <= e ){
        if(arr[m] == target)
            //Search completed
            return m;

        else if ( arr[m] < target){
            //Target right side mei hai
            //Search right side
            s = m + 1;
        }

        else {
            //arr[m] > target  meaning target is on the left side.
            e = m - 1;
        }

        //Recalculate m.
        m = s + ( e - s ) / 2;
    }
    return -1;
}

int main(){

    vector<int> arr{1,2,3,5,7,9,10,45};
    int target; 
    cout<<"Enter the target value "; cin>>target;

    int ans = BinarySearch(arr , target); 
    if(ans != -1) cout<<"Target found at index "<<ans<<endl;
    else cout<<"Target not found";

return 0;
}