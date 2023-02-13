#include<iostream>
using namespace std;

int main(){
    int arr[200];   //declaring an array without its elements
    int size;
    cout<<"Enter the size of the array ";
    cin>>size;

        //Input array elements
    for(int i=0; i<size;i++){
            cin>>arr[i];
    }
        //Printing array elements
    for(int i=0; i<size;i++){
            cout<<2*arr[i]<<" ";
    }
return 0;
}