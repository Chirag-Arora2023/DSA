#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
     int start=0;
    int end=size-1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++)  cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    reverse(arr,size);

return 0;
}