#include<iostream>
#include<limits.h>
using namespace std;

int max(int arr[],int size){
    int maxNum=INT_MIN;
    for(int i=0; i<size;i++)
    {   
        if(arr[i]>maxNum) 
          maxNum=arr[i];
    }
    return maxNum;
}
int main()
{
    int arr[]={3,7,9,1,5,10,34,55};
    int size = 8;
    cout<<"The maximun number in the array is "<<max(arr,size);
}