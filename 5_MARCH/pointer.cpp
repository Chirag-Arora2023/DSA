#include<iostream>
using namespace std;

int main(){
    int a = 29;
    int* p = &a;
    cout<<"Printing a: " <<a<<endl;
    cout<<"Printing p: "<<p<<endl;
    cout<<"Printing *p: "<<*p<<endl;
    cout<<"Printing &a: "<<&a<<endl;
    cout<<"Printing &p: "<<&p<<endl;
    ++*p;
    cout<<"Printing a: "<<a<<endl;
    int* ptr = p;
    cout<<"Printing ptr: "<<ptr<<endl;
    cout<<"Printing &ptr: "<<&ptr<<endl;
    cout<<"Printing *ptr: "<<*ptr<<endl;
    cout<<*ptr;


    return 0;
}