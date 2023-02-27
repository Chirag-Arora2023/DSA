#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> arr{1,2,3,4,2};
    int ans =0;
    for(int i=0;i<arr.size();i++){
        ans^=arr[i];
    }
    cout<<ans<<endl;

    for(int i=1;i<arr.size();i++)
        ans^= i;
    cout<<(1^2)<<" "<<(2^3)<<" "<<(1^1);
    cout<<endl<<ans;
    return 0;
}