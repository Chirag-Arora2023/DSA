#include<iostream>
using namespace std;

int main(){
    int rowCount,colCount,col;
    cin>>rowCount;
    cin>>colCount;

    for(int i=0;i<rowCount;i++){
        if(i==0 || i==rowCount-1){
            for(int col=0;col<colCount;col++) cout<<"* ";
            cout<<endl;
        }
        else {
            for(col=0;col<colCount;col++){
                if(col==0 || col==colCount-1) cout<<"* ";
                else cout<<"  ";
            }
            cout<<endl;
        }

        
    }

return 0;
}