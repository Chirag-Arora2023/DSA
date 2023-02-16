#include<iostream>
using namespace std;

int main(){
    
    int rows,cols;
    cin>>rows;
    cin>>cols;
    int arr[100][100];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        int colsum=0;
        for(int j=0;j<cols;j++){
            colsum+=arr[j][i];
        }
        cout<<colsum;
        cout<<endl;
    }

    

return 0;
}