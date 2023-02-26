#include<iostream>
using namespace std;

void altSwap(int arr[] , int size){
    for(int i=0;i<size;i =i+2){
        if((i+1) < size)
        swap(arr[i],arr[i+1]);
    }
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array "; cin>>size;
    cout<<"Enter the ekements of array "<<endl;
    for(int i=0;i<size; i++){
        cin>>arr[i];
    }
    
     altSwap(arr , size);
    // for(int j=0;j<size; j=j+2){
    //     swap(arr[j] , arr[j+1]);
    // }

    printarr(arr,size);
    return 0;
}