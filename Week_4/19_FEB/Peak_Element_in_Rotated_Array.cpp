#include<iostream>
#include<vector>
using namespace std;

int pivotElement(vector<int>arr){
    int s=0 , e = arr.size()-1,ans;
    int m= s + (e-s)/2;

    while( s <= e ){

        if( (m+1) <= e  &&  arr[m] > arr[m+1])       return m;
        else if( (m-1) >= s  &&  arr[m] < arr[m-1] ) return (m-1);
        else if( arr[m] < arr[0])                   e = m - 1;
        else                                        s = m + 1;

        m = s + (e - s )/2 ;

    }
    return -1;
}

int main(){
    vector<int> arr{5,6,7,8,9,10,34,2,3,4};
    int ans = pivotElement(arr);
    cout<<"Peak element isn the rotated array is " << arr[ans];

return 0;
}