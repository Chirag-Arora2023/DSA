#include<iostream>
using namespace std;

int sum(int a, int b){ return(a+b);}

int getMax(int a, int b, int c){
    if(a>b &&a>c){return a;}
    else if(b>a && b>c){return b;}
    else return c;}

void getCount(int n){for(int i=1; i<=n; i++)cout<<i<<" "; }

int numSum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    } return sum;
}


 
 int main(){


    //SUM OF TWO NUMBERS
    // int a,b; 
    // cout<<"Enter the value of a "; cin>>a;
    // cout<<"Enter the value of b "; cin>>b;
    // cout<<"a + b = "<<sum(a,b);


    //MAX OF THREE NUMBERS
    // int a,b,c;
    // cout<<"Enter the value of a "; cin>>a;
    // cout<<"Enter the value of b "; cin>>b;
    // cout<<"Enter the value of c "; cin>>c;
    // int max= getMax(a,b,c);
    // cout<<"Maximum number is "<<max<<endl;


    // COUNTING 1 TO N
    // int n; cin>>n;
    // getCount(n);


    // SUM OF N numbers
//     int n; 
//     cout<<"Enter the value of n= "<<endl;
//     cin>>n;
//    cout<< numSum(n);

    // STUDENT GRADE PROBLEM
    // SUM OF EVEN NUMBERS BETWEEN 1 TO N
    // AREA OF A CIRCLE
    // NUMBER IS ODD OR EVEN
    // FACTORIAL OF A numbers
    // CHECK NUMBER IS PRIME OR NOT
    // PRINT ALL PRIME NUMBERS FROM 1 TO N
   return 0;
 }