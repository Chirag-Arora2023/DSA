#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7};
    int* p = arr;
    cout<<"Printing the address of arr: "<<arr<<endl;
    cout<<"Printing the address of arr[0]: "<<&arr[0]<<endl;
    cout<<"Printing the value  of arr[3]: "<<arr[3]<<endl;
    cout<<"Printing the value of p : "<<p<<endl;
    cout<<"Printing the address of pointer p : "<<&p<<endl;
    cout<<"Printing the  *p : "<<*p<<endl;

    return 0;
}