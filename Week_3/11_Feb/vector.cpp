#include<iostream>
#include<vector>
using namespace std;

int main()
{       //Vector is dynamic array which can store multiple values of same type. once its filled it doubles itself to make room for more elements.
        //Declaration
    vector<int> arr;
    vector<int>brr(5);    //5 is th esize of vector
    //Initialization
    vector<int> crr={1,2,3,4,5,6,7};

    vector<int> drr(5,0);   //The vector will contain five elements and all these will be 0.

    cout<<  drr.size()  <<endl;     //Function used to check the no. of elements in the vector
    
    for(int i=0; i<drr.size();i++)  {cout<<drr[i]<<" "; } cout<<endl;  //Printing the array/vector.

    arr.push_back(5);       //Function to add values to a vector. one value can be pushed back at a time.
     arr.push_back(9);  arr.push_back(7); 
    for(int i=0; i<arr.size();i++)  {cout<<arr[i]<<" ";}  cout<<endl;

    arr.pop_back();         //Remove an element from the vector.
    for(int i=0; i<arr.size();i++)  {cout<<arr[i]<<" ";}  cout<<endl;

    cout<<arr.size()   <<endl;             //Checks the number of elements in the array. = 2

    cout<<arr.empty()  <<endl;            //Checks if the vector is empty or not. if yes it prints 1(true).

    cout<<arr.capacity()<<endl;         //shows the full size of the vector


}