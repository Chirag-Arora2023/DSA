#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;
    cout<<"enter the size of array ";
    cin>>size;
    
    cout<<"Enter the values "<<endl;
    for(int i=0; i<size;i++)   cin>>arr[i];
    
    int  start = 0;
    int  end = size-1;
        //SWAP USING temp variable.
   while(start <= end)
   {
        int temp=arr[start];
        arr[start] =arr[end];
        arr[end] = temp;
        start++;
        end--;
   }
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";

return 0;
}