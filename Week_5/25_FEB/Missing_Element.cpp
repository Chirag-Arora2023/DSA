#include<iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr{1,3,5,3,4,7,3,4,9};
    sort(arr.begin() , arr.end());
    for(auto i: arr){
        cout<<i<<" ";
    }

//     //APPROACH 1  SORT AND SEARCH
//     for(int i=0;i<arr.size();i++){
//         int mini = i;
//         for(int j=i+1 ; j<arr.size(); j++){
//             if(arr[j] < arr[mini])
//                 mini = j;
//         }
//         swap(arr[i] , arr[mini]);
//     }
//    // for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";

//     for(int i=0;i<arr.size();i++){
//         if(arr[i] != i+1)
//         cout<<"The missing element is " <<i+1<<" "<<endl;
//     }

    //NEGATIVE MARKING APPROACH
    vector<int> brr{1,3,5,3,4,3,7,7,7};
    int n = brr.size();
    for(int i=0;i<n;i++){
        int index = abs(brr[i]);

        if(brr[index - 1]>0) 
        brr[index - 1] *= -1;
        
    }
    for(int i=0;i<n;i++){
        if(brr[i] > 0)
        cout<<i+1<<" ";
    }


    return 0;
}