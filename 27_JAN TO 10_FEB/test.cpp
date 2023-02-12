#include<iostream>
using namespace std;
int main(){
    // float f; int size; bool b=false;
    // size=sizeof(b);
    // cout<<"size of the boolean datatype is "<<size<<endl;
    // cout<<b<<endl;
    // char c=97;

    // cout<<c<<endl;

    // int a=5,b=6;
    // bool first=(a==b);
    // cout<<first<<endl;
    
    // bool second=(a==b);
    // cout<<second<<endl;

    // bool third=(a<=b);
    // cout<<third<<endl;

    // bool fourth=(a>=b);
    // cout<<fourth<<endl;

    // bool fifth=(a!=b);
    // cout<<fifth<<endl;

    // cout<<(a!=b)&&(a<b);
    // cout<<(a!=b)||(a>b);
    // int bronum;
    // cin>>bronum;

    // if (bronum==0)
    // {
    //     cout<<"Baat Ban Jayegi"<<endl;
    // }
    // else{cout<<"Baat Nhi Banegi"<<endl;}
    // char endl='2';
    // cout<<endl;
    
    // int a=5;
    // cout<<(++a)*(++a);
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(~b)<<endl;
    // cout<<(a^b)<<endl;
    // cout<<(a&b)<<endl;
    // int n; cin>>n;

    // for(int row=0;row<1;row++){
    //     for(int col=0; col<n-row; col++)cout<<"*";cout<<endl;
    // }
    // for(int row=1; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         if(col==0 ||col==n-row-1)cout<<"*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // bool a=0,b=1;
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;
    // cout<<(~b)<<endl;

//     int rowcount;
//  cin>>rowcount;
// int num;
// int num2=1;
//  for(int row =0; row < rowcount; row++) {
//               num=row+1;
//               num2=2*row;
//         for(int space = 0; space <rowcount-row-1; space++){
//             cout << " ";}

//     for(int col=0;col<=row;col++){

//          cout<<num;
//          num++;
//     }

//     for(int col=0;col<row;col++){

//          cout<<num2;
//          num2--;
//     }

 
//    cout<<endl; 
//  }
// int a,i;
// cin>>a>>i;
// a= a>>i;
// cout<<a;

// int marks;
// cout<<"Enter the marks";
// cin>>marks;
// switch (marks/10)
// {
//     case 9:  cout<<'A';
//     break;

//     case 8:  cout<<'B';
//     break;

//     case 7:  cout<<'C';
//     break;

//     case 6: cout<<'D';
//     break;

// default: cout<<'F';
//     break;
// }


int n; cin>>n;
for (int i = 1; i <=n; i++)
{   int num=0;

    for(int s=1;s<=n-i;s++)cout<<"  ";

    for(int j=1; j<=2*i-1; j++){
        if(j>i)num--;
        else num++;
        cout<<num<<" ";
    }
cout<<endl;
}

// char ch=1; 

// int i; cin>>i;
// cout<<ch<<endl;
// ch= ch<<i;
// cout<<ch;


 return 0;
}
