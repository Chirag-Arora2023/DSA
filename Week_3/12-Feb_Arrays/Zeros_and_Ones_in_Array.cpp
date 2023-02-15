#include<iostream>
using namespace std;

int main(){

    int arr[]={0,1,4,7,1,1,0,0,1,1,0,3,1,0};
    int size=14;

    int numZero=0;
    int numOne=0;

    for(int i=0; i<size;i++)
        {
            if(arr[i]==0)  numZero++;
            if(arr[i]==1)  numOne++;
        }

    cout<<  "Number of zero's = "  <<  numZero  <<endl;
    cout<<  "Number of one's  = "   <<  numOne   <<endl;
    
}