#include<iostream>
#include<vector>
using namespace std;

int missingElement(vector<int> arr){
    int s=0, e = arr.size() -1,ans = -1;
    int m= s + (e-s)/2;
    while(s<=e){
        if(arr[m] == m+1)
            s= m+1;
        else {
            ans = m;
            e=m-1;

        }
        m= s+(e-s)/2;
    }
    return (arr[ans] - 1);
}

int main(){

    vector<int> arr{1,2,3,4,5,6,7,8,9,11};
    int ans = missingElement(arr);
    cout<<ans;

return 0;
}