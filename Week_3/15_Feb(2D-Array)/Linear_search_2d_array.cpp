#include<iostream>
using namespace std;

int Find(int arr[][30],int key){

}

int main(){
    
    int rows,cols;
    int key;
    cout<<"Number of rows: "; cin>>rows;
    cout<<"Number of columns: "; cin>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    Find(arr[rows][cols],key);
    

return 0;
}