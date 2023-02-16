#include<iostream>
using namespace std;

void Transpose(int arr[100][100],int rows, int cols,int trr[100][100]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            trr[i][j]=arr[j][i];
            
        }
    }
    cout<<"Transposed Matrix: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<trr[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    int arr[100][100];
    int trr[100][100];
    int rows,cols;
    cout<<"Number of rows: ";  cin>>rows;
    cout<<"Number of columns: ";  cin>>cols;

    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

     Transpose(arr,rows,cols,trr);

    //  for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    //}
return 0;
}