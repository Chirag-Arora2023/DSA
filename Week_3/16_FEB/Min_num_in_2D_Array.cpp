#include<iostream>
using namespace std;

int Mini(int arr[100][100],int rows,int cols){
        int mini=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] < mini)
                mini=arr[i][j];
        }
    }
    return mini;
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
    int ans=Mini(arr,rows,cols);
    cout<<"The minimum number is " <<ans;
}