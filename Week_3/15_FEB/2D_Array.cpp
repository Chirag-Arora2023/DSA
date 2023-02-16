#include<iostream>
using namespace std;

int main(){
        //2D arrays are data structures which can store multiple 1D arrays under 1  variable
        //They can be visualised as a matrix.
        //But actually they are multiple arrays(memory blocks) arranged contiguously.
    
    //Declartion
    int arr[3][3];
    int brr[4][5]={ {1,2,3,4,5}, {6,7,8,9,10}, {2,4,6,8,1}, {1,5,8,3,4}};
    //Printing a specific element
    cout<<brr[1][2]<<endl;      //1--> row number   2-> col number
    cout<<brr[10]<<endl;              //outputs a garbage value

    //Printing the whole 2D-array
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    int rowCount;  cin>>rowCount;
    int colCount;  cin>>colCount;
    int crr[rowCount][colCount];

    //Taking input 2D-array 
    //Row-wise
    for(int i=0;i<rowCount;i++){
        for(int j=0;j<colCount;j++){
            cin>>crr[i][j];
        }
        
    }

    for(int i=0;i<rowCount;i++){
        for(int j=0;j<colCount;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}