#include<iostream>
using namespace std;

int main(){

        //operators
    //Arithematic operators +,-,*,/,%
    int a=99;
    a=a%10;
    cout<<a<<endl;
        //Now a=9
    a+= 10;      //a+=10  --> a = a+10
    cout<<a<<endl;  // now a=19


    //LOGICAL OPERATORS

    int l=13,i=4;

    cout<< ( l>i  &&  i>0 ) <<endl;       //logical AND operator
    cout<< ( l<0  ||  i>3 ) <<endl;       //logical OR  operator
    cout<<!( l>i  &&  i>0 ) <<endl;       //logical NOT operator
    


return 0;    
}