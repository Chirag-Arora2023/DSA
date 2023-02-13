#include<iostream>
#include<limits.h>
using namespace std;

int mini(int arr[],int size){
    int minNum=INT_MAX;
    for(int i=0; i<size;i++)
    {   
        if(arr[i]<minNum) 
          minNum=arr[i];
    }
    return minNum;
}
int main()
{
    int arr[]={3,7,9,1,5,10,34,55};
    int size = 8;
    cout<<"The minimun number in the array is "<<mini(arr,size);
}