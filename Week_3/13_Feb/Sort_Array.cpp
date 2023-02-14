#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void sort(vector<int>vect,int size){
    int start=0,end=vect.size()-1,i=0;
    while(start<end){
        if(vect[i]==0){
            swap(vect[i],vect[start]);
            start++;
            i++;
        }
        else if(vect[i]==1){
            swap(vect[i],vect[end]);
            end--;
        }
    }
    for(auto i:vect) cout<<i<<" ";
}

int main(){

    vector<int>vec;
    int size,a;
    cout<<"Size of vector ";
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>a;
        vec.push_back(a);
    }
    
    sort(vec,size);
    return 0;
}