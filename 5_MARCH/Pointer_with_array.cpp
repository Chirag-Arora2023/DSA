#include<iostream>
using namespace std;

int main(){
    char arr[20] = "Chirag Arora";
    char* p  = arr;
    char* p2 = &arr[1];
    char** q = &p;
    cout<<"arr:  "<<arr<<endl;
    cout<<&arr<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<*p2<<endl;
    cout<<*p2 + 1<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;




    // int arr[10] = {1,2,3,4,5,6,7};
    // int* p = arr;
    // cout<<"Printing the address of arr: "<<arr<<endl;
    // cout<<"Printing the address of arr[0]: "<<&arr[0]<<endl;
    // cout<<"Printing the value  of arr[3]: "<<arr[3]<<endl;
    // cout<<"Printing the value of p : "<<p<<endl;
    // cout<<"Printing the address of pointer p : "<<&p<<endl;
    // cout<<"Printing the  *p :   "<<*p<<endl;
    // cout<<endl;

    // cout<<"*p + 1:"<<*p + 1<<endl;
    // cout<<"*(arr) + 5:  "<<*(arr)+5<<endl;
    // cout<<"*(arr + 1):      "<<*(arr+2)<<endl;
    // cout<<endl;

    // cout<<arr[1]<<"     "<<*(arr+1)<<"      "<<1[arr]<<endl;
    // //arr = arr+2;
    // cout<<p<<"  ";
    // p=p+3;
    // cout<<p;
    // cout<<endl;
    // cout<<arr[0] + 10;

    return 0;
}