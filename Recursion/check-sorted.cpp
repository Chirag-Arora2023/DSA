#include <iostream>
#include<vector>
using namespace std;

bool checksorted(vector<int>& arr,int& n,int i){
    
    //BASE CASE(when pointer i is greater then ending index of the aray)
    if(i == n-1 )return true;

    //PROCESSING
    if( arr[i+1] < arr[i] ){return false;}

    //RECURSIVE CONDITION
    checksorted( arr, n ,i+1 );
}

int main() {
    //CHECK WHETHER THE GIVEN ARRAY IS SORTED OR NOT
    vector<int> arr{1,2,3,4,5,6,7,8};
    int i=0;
    int n=arr.size();
    bool ans = checksorted(arr,n,i);
    if(ans)cout<<"Array is sorted."<<endl;
    else cout<<"the array is NOT SORTED."<<endl;
  return 0;
}