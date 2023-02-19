#include<iostream>
#include<vector>
using namespace std;

int searchRA(vector<int> arr , int target){
    int s = 0, e = arr.size() - 1 ;
    int m = s + ( e - s ) / 2;

// //MY FIRST APPROACH:
//     while( s <= e ){
//         if( arr[m] == target) return m;
//         else if(arr[m] > target){
//             if(target < arr[0] && target > arr[m])
//             //move right 
//             s = m + 1;
//             else //move left
//                 e = m - 1;
//         }
//         else {
//             if(target < arr[0])
//                 s = m + 1;
//             else e = m - 1;
//         }

//         m = s + ( e -  s) / 2;
//     }
//     return -1;

    //SECOND APPROACH:

    
}

int main(){

    vector<int> arr{4,5,6,7,0,1,2};
    int target;
    cout<<"Enter the target "; cin>> target ;

    int ans = searchRA(arr, target);
    cout<<"The target element is at index "<<ans<<endl;

return 0;
}