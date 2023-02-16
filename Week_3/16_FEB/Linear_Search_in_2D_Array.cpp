#include<iostream>
using namespace std;

bool Find(int arr[100][100],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)
            return true;
        }
    }
    return false;
}

int main(){
    int arr[100][100];
    int rows,cols,key;
    cout<<"Number of rows: ";  cin>>rows;
    cout<<"Number of columns: ";  cin>>cols;

    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
        //cout<<endl;
    }
    cout<<"Enter the numberr you want to find "<<endl;  cin>>key;
    int ans = Find(arr,rows,cols,key);
    if(ans==true)cout<<"Found "<<key<<endl;
    else cout<<key<<" Not Found"<<endl;

return 0;
}