#include<iostream>
#include<vector>
using namespace std;

int peakElement(int arr[],int size){
    int s=0;
    int e=size-1;
    int m = s + (e-s)/2;

    // //FIRST APPROACH
    // while(s <= e){
    //     if(arr[m] > arr[m-1]  && arr[m] > arr[m+1])   return arr[m];
    //     else if(arr[m] > arr[m-1]  &&  arr[m]<arr[m+1])  s= m+1;
    //     else if(arr[m] < arr[m-1])  e = m - 1;
    //     m=s + (e-s)/2;

    //SECOND APPROACH
    while( s < e ){
    if(arr[m] < arr[m+1])  s = m + 1 ;
    else                    e = m ;
    m = s + (e - s)/2;
    }
    return s;
}


int main(){

    int arr[]={0,2,5,9,10,3,1,-3,-7};
    int size=9;

    int ans=peakElement(arr,size);
    cout<<"Peak indeex is " <<ans;
}