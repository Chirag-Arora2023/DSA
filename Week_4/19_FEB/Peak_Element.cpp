#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int>arr){
    int s=0, e = arr.size() - 1, ans;
    int m= s + (e - s)/2;

    while(s < e){
        if(arr[m] < arr[m+1])
            s = m+1;
        else e = m;
        m= s+(e-s)/2;
    }
    return arr[s];
}

int main(){

    vector<int> arr{1,2,3,4,6,7,8,9,10,7,6,3,1,0};
    int ans = peakElement(arr);
    cout<<ans;
    

return 0;
}