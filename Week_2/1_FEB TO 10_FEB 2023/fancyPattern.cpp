#include<iostream>
using namespace std;
int main(){

    //FULL PYRAMID
    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     //SPACES
    //     for(int col=0; col<n-row-1; col++){ cout<<" ";}
            
    //     //*
    //     for(int col=0; col<row+1; col++) {cout<<"* ";}
    //     cout<<endl;
    // }

    //  INVERTED FULL PYRAMID
    // int n; cin>>n;

    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<row; col++) cout<<" ";
    //     for(int col=0; col<n-row; col++) cout<<"* ";
    //     cout<<endl;
    // }

    //SOLID DIAMOND

    // int n; cin>>n;
    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<n-row-1; col++) cout<<" ";
    //     for(int col=0; col<row+1; col++) cout<<"* ";
    //     cout<<endl;
        
    // }

    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<row; col++) cout<<" ";
    //     for(int col=0; col<n-row; col++) cout<<"* ";
    //     cout<<endl;
    // }

    //HOLLOW DIAMOND

    // int n; cin>>n;
    // for (int row = 0; row < n; row++)
    // {
    //     //SPACES
    //     for(int col=0; col<n-row-1; col++) cout<<"  ";
    //     for(int col=0; col<2*row+1; col++)
    //     {if(col==0 || col==2*row)cout<<"* ";
    //         else cout<<"  ";}
    //     cout<<endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //      for(int col=0; col<row; col++) cout<<"  ";
    //     for(int col=0; col<2*n -2*row-1; col++)
    //     {if(col==0 || col==(2*n)-2*row-2)cout<<"* ";
    //         else cout<<"  ";}
    //     cout<<endl;
    // }
    
    //FLIPPED SOLID DIAMOND
    // int n; cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     for(int col=0; col<n-row; col++) cout<<"* ";
    //     for(int col=0; col<2*row+1;col++) cout<<"  ";
    //     for(int col=0; col<n-row; col++) cout<<"* ";
    //     cout<<endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for(int col=0; col<row+1; col++)cout<<"* ";
    //     for(int col=0; col<2*n-2*row-1; col++)cout<<"  ";
    //     for(int col=0; col<row+1; col++)cout<<"* ";
    //     cout<<endl;
    // }
    
    //FANCY PATTERN
    // int n; cin>>n;
    // for(int row=0; row<n; row++)
    // {
    //     for(int col=0; col<2*row+1; col++)
    //     {if(col%2==1 && col!=2*row+1)cout<<"*";
    //     else cout<<row+1;}
    //     cout<<endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for(int col=0; col<2*n-2*row-1; col++)
    //     {if(col%2==1 && col!=2*n-2*row)cout<<"*";
    //     else cout<<n-row;}
    //     cout<<endl;
    // }

    //HOLLOW INVERTED HALF PYRAMID
    // int n; cin>>n;
    // for (int row = 0; row < n; row++)
    // {
    //     for(int col=0; col<n-row; col++)
    //     {
    //         if(row!=0){if(col==0 || col==n-row-1){cout<<"*";}
    //                     else cout<<" ";}
    //         else cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // for(int row=0; row<n; row++)
    // {   if(row!=0)
    //     {for(int col=0; col<n-row; col++)
    //     {
    //         if(col==0 || col==n-row-1)cout<<"*";
    //         else cout<<" ";
    //     }}
    //     else {for(int col=0; col<n-row; col++){cout<<"*";}}

    // cout<<endl; 
    // }

    
    //NUMERIC PALINDROME
    // int n; cin>>n;

    // for (int row = 0; row < n; row++){
    //     for(int col=0; col<row+1; col++)cout<<col+1;
    //     for(int col=row; col>=1; col--)cout<<col;
    //     cout<<endl;
    // }
    
    //ALPHABET PALINDROME PYRAMID
    // int n; cin>>n;
    // int col;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         char alph=col+'A';
    //         cout<<alph;}

    //    for(int col=row; col>=1; col--){char alph=col+'A'-1; cout<<alph;}
    // cout<<endl;
    // }

    //SOLID SQUARE
    // int n; cin>>n;
    //     for(int row=0; row<n; row++){
    //         for(int col=0; col<n; col++)cout<<"* ";
    //         cout<<endl;
    //     }

    //HOLLOW SQUARE
    // int n; cin>>n; int col;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n; col++)
    //     if(row==0 ||row==n-1 ||col==0 || col==n-1) {cout<<"* ";}  else cout<<"  ";
    //     cout<<endl;
    // }
    // return 0;


    //NUMERIC FULL PYRAMID
    // int rowCount; cin>>rowCount;
    // int num,num2;

    // for (int row = 0; row < rowCount; row++)
    // {   num=row+1;
    //     num2=2*row;
    //     for(int space=0; space<rowCount -row-1; space++) cout<<" ";
    //     for(int col=0; col<=row; col++){
    //         cout<<num; num++;
    //     }
    //     for(int col=0; col<row;col++){
    //         cout<<num2; num2--;
    //     }
    //     cout<<endl;
    // }
    
    
    //NUMERIC HOLLOW PYRAMID
    // int rowCount; cin>>rowCount;
    // int num=1;
    // for (int row = 0; row < rowCount-1; row++)
    // {
    //     for(int space=0; space<rowCount-row-1;space++)cout<<" ";
    //     for(int col=0; col<=2*row;col++){
    //         if(col==0)cout<<col+1;
    //         else if(col==2*row)cout<<row+1;
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int col=0; col<2*rowCount; col++){
    //     if(col%2==0){cout<<num; num++;}
    //     else cout<<" ";
    //     //agar col<rowCount then-->    //cout<<num<<" "; num++;
    // }

    //FANCY PATTERN 1
    // int rowCount;
    // cin>>rowCount;

    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<row+1;col++){
    //         int num=row+3;
    //         cout<<num;
    //     }
    //     cout<<endl;
    // }
    //     for (int row = 0; row < rowCount-1; row++)
    //     {
    //         for(int col=0; col<rowCount-row-1;col++){
    //             cout<<rowCount-row+1;
    //         }
    //     cout<<endl;
    //     }
        
    //FANCY PATTERN 2
    // int rowCount ;
    // cin>>rowCount;

    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<2*row+1; col++){
    //         if(col%2==0)cout<<row+1;
    //         else cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<2*rowCount-2*row-1; col++){
    //         if(col%2==0)cout<<rowCount-row;
    //         else cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    //HOLLOW FULL PYRAMID
    // 
    
    //NUMERIC HOLLOW HALF PYRAMID
    // int rowCount; cin>>rowCount;

    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<row+1;col++){
    //         if(col==0 ||col==row || row==rowCount-1) cout<<col+1;
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //NUMERIC HOLLOW INVERTED HALF PYRAMID
    // int rowCount; cin>>rowCount;

    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<rowCount-row;col++){
    //         if(row==0)cout<<col+1;
    //         else if(col==0)cout<<row+1;
    //         else if(col==rowCount-row-1)cout<<rowCount;
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }

    //NUMERIC PALINDROME EQUILATERAL
    // int rowCount; cin>>rowCount;

    // for (int row = 0; row < rowCount; row++)
    // {   int num=row;
    //     for(int space=0; space<rowCount-row-1; space++)cout<<" ";
    //     for(int col=0; col<row+1;col++)cout<<col+1;
    //     for(int col=0;col<row;col++){
            
    //         cout<<num;
    //         num--;
    //     }
    //     cout<<endl;
    // }
    
    //SOLID HALF DIAMOND
    // int rowCount; cin>>rowCount;

    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<row+1; col++)cout<<"*";
    //     cout<<endl;
    // }
    // for (int row = 0; row < rowCount-1; row++)
    // {
    //     for(int col=0; col<rowCount-row-1;col++)cout<<"*";
    //     cout<<endl;
    // }
    
    //FANCY PATTERN
    // int rowCount; cin>>rowCount;

    // for (int row = 0; row < rowCount; row++)
    // {   int num=row-1;
    //     for(int col=0; col<2*row+1;col++){
    //         if(col==0 || col==2*row)cout<<"*";
    //         else if(col<=row)cout<<col;
    //         else if(col>row){cout<<num; num--;}
    //     }
    //     cout<<endl;
    // }
    // for (int row = 0; row < rowCount-1; row++)
    // {   int num=rowCount-row-3;
    //     for(int col=0; col<rowCount-2*row+1;col++){
    //         if(col==0 || col==rowCount-2*row)cout<<"*";
    //         else if(col<=rowCount-row-2)cout<<col;
    //         else if(col>rowCount-row-2){cout<<num; num--;}
    //     }
    //     cout<<endl;
    // }
    

    //FANCY PATTERN
    // int rowCount; cin>>rowCount;
    // int num=1;

    // for (int row = 0; row < rowCount; row++)
    // {   for(int col=0; col<=row;col++){
    //     cout<<num++;
    //     if(col==row) break;
    //     cout<<"*";
    // }
    //     cout<<endl;
    // }
    // for (int row = 0; row < rowCount; row++)
    // {   int num=((rowCount-row)*(rowCount-1-row))/2+1;
    //     for(int col=0; col<=rowCount-row-1; col++){
    //         cout<<num++<<"*";
    //     }
    //     cout<<endl;
    // }
    
    

    //FLOYD'S TRIANGLE PATTERN
    // int rowCount; cin>>rowCount;
    // int num=1;
    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<row+1; col++){
    //         cout<<num++<<" ";
    //     }
    //     cout<<endl;
    // }
    

    //BUTTERFLY PATTERN
    // int rowCount;
    // cin>>rowCount;

    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<row+1;col++)cout<<"* ";
    //     for(int col=0;col<2*rowCount-2*row-2;col++)cout<<"  ";
    //     for(int col=0; col<row+1;col++)cout<<"* ";
    //     cout<<endl;
    // }
    // for (int row = 0; row < rowCount; row++)
    // {
    //     for(int col=0; col<rowCount-row;col++)cout<<"* ";
    //     for(int col=0;col<2*row;col++)cout<<"  ";
    //     for(int col=0; col<rowCount-row;col++)cout<<"* ";
    //     cout<<endl;
    // }
    

    //FANCY PATTERN
    int n; cin>>n;

    for (int row = 0; row < n; row++)
    {   
        int num=1;
        for(int col=0; col<n-row+3;col++){
            cout<<"*";
        }
        for(int col=0; col<=row;col++){
            cout<<num++;
            if(col==row) break;
            cout<<"*";
        }
        for(int col=0; col<n-row+3;col++){
            cout<<"*";}
        cout<<endl;
    }


    return 0;
    }