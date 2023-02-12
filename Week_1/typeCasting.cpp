#include<iostream>
using namespace std;

int main(){

        //original data type of the variable
    int a=65;
        //changing 'a' into a character datatype
    char ch= char(a);   // This is manual type casting, here you have to specify the resultant datatype.
    cout<<ch<<endl;           // it will output A  because 65 is the ASCII value for A.

        //Automatic typecasting
    int b=67;
        //tyecasting it to character 
        char grade= b;
        cout<<grade<<endl;

    return 0;
}