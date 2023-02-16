#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void Intersection(vector<int>v1,vector<int>v2,vector<int>ans){
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                ans.push_back(v1[i]);
                v2[j]=INT_MIN;
                v1[i]=INT_MAX;
            }
        }
    }
    for(auto i:ans)cout<<i<<" ";
}

int main(){

    int size1,size2,a;
    vector<int>v1; vector<int>v2; vector<int>ans;
    cout<<"Size of v1 ";
    cin>>size1;
    cout<<" Elements of v1 ";
    for(int i=0;i<size1;i++){
        cin>>a;
        v1.push_back(a);
    }
    cout<<"Size of v2 ";
    cin>>size2;
    cout<<" Elements of v2 ";
    for(int i=0;i<size2;i++){
        cin>>a;
        v2.push_back(a);
    }
    
    Intersection(v1,v2,ans);
    return 0;
}