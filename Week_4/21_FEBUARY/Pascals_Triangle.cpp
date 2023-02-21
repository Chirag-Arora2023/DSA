#include<iostream>
using namespace std;

int main(){
    //cout<<4*5-3/2;
    int n;
    cout<<"Enter the number of rows "; cin>>n;
    for(int i=1;i<=n;i++){  //Outer loop for rows
        int B = 1;
        for(int j=1; j<=i;j++){     //Inner loop for the half pyramid pattern.
            cout<<B<<" ";
            B = B * (i-j) / j; // Binomial function. pure mathematics. Content to be printed
        }
        cout<<endl;
    }

return 0;
}