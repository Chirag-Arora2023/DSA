#include<iostream>
using namespace std;

void extremPrint(int arr[],int size,int start,int end)
{
     while(start<=end)
    {   
        if(start==end) {cout<<arr[start]; break;}
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        
        start++;
        end--;
    }
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80};
    int size =8;

    int start=0;
    int end=size-1;
    extremPrint(arr,size,start,end);
    // while(start<=end)
    // {   
    //     if(start==end) {cout<<arr[start]; break;}
    //     cout<<arr[start]<<" ";
    //     cout<<arr[end]<<" ";
        
    //     start++;
    //     end--;
    // }

return 0;
}