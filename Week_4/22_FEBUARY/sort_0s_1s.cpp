#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{0,1,0,1,1,0,1,0,1,0,0,0};
    int s = 0 , i=0;
    int e = arr.size() - 1;
    while(s < e){
       if(arr[i] == 0){
        swap(arr[i],arr[s]);
        s++; 
        i++;
       }
       else if(arr[i] == 1){
        swap( arr[i] , arr[e] );
        e--;
       }
    }
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";

    return 0;
}