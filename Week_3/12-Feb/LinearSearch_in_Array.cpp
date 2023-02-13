#include<iostream>
using namespace std;
        //Making a boolean function for linear search
bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key) return true;
    } return false;
}
int main(){
    int arr[]={3,6,9,7,5,1,8,33,45,12};     //Declaring the array
    int size=10;                            //Size of array

    int key; cout<<"Enter the key ";        // the element you want to search
    cin>>key;
    bool result=find(arr,size,key);
    if( result=true )  {cout<<"Found"; }        //The array has the key element
    else cout<<"Not found";                 //The array does not contain the key element

return 0;    
}
