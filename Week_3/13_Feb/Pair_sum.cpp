#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void Pair(vector<int>v1,vector<int>v2,int sum){
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]+v2[j]==sum)
            cout<<"{ "<<v1[i]<<", "<<v2[j]<<" } "<<endl;
        }
    }
}

int main(){
    int size1,size2,sum,a;
    vector<int>v1; vector<int>v2;

    cout<<"Size of v1 ";
    cin>>size1;
    cout<<" Elements of v1 "<<endl;
    for(int i=0;i<size1;i++){
        cin>>a;
        v1.push_back(a);
    }

    cout<<"Size of v2 ";
    cin>>size2;
    cout<<" Elements of v2 "<<endl;;
    for(int i=0;i<size2;i++){
        cin>>a;
        v2.push_back(a);
    }
    cout<<"Enter the desired sum: ";
    cin>>sum;

    Pair(v1,v2,sum);
    
    return 0;
}