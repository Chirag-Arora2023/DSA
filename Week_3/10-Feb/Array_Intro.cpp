#include<iostream>
using namespace std;

int main(){
            //ARRAY IS A DATA STRUCTURE WHICH IS USED TO STORE MULTIPLE VALUES IN A SINGLE VARIABLE. ON;Y SIMILAR DATA CAN BE STORED IN AN ARRAY
            //Array declaration
    int arr[] = {1, 9, 3, 7, 5, 54, 7};
    //index      0  1  2  3  4  5  6

            //finding element using index
    cout<<"The element at index 3 is "<<arr[3]<<endl;     //3 is the index, now it should print 4
    cout<<arr<<endl;
            //Declaration with size specification
    char grade[5]={ 'a','b','c','d','e'};
            // Generally this statement print the output but this is not the case in array cout<<grade<<endl; dosent work.
            //In order to print an array we have to print individual elements using a for loop.
    for(int i=0;i<7;i++) cout<<arr[i]<<" ";
            //size specification but elements < size
    int num[5]={5,9,3};
return 0;
}