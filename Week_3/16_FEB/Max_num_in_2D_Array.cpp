#include<iostream>
using namespace std;

int Max(int arr[100][100],int rows,int cols){
        int maxi=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] > maxi)
                maxi=arr[i][j];
        }
    }
    return maxi;
}

int main(){
     int arr[100][100];
    int rows,cols,maxi;
    cout<<"Number of rows: ";  cin>>rows;
    cout<<"Number of columns: ";  cin>>cols;

    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int ans=Max(arr,rows,cols);
    cout<<"The maximum number is " <<ans;
}