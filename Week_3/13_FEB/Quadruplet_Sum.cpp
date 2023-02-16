#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void Quadruplet(vector<int>v1,vector<int>v2,vector<int>v3,vector<int>v4,int sum){
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            for(int k=0;k<v3.size();k++){
                for(int l=0;l<v4.size();l++){
                    if(v1[i]+v2[j]+v3[k]+v4[l]==sum){
                        cout<<"{ "<<v1[i]<<" "<<v2[j]<<" "<<v3[k]<<" "<<v4[l]<<" } "<<endl;
                    }
                }
            }
        }
    }
}

int main(){

    int size1,size2,size3,size4;
 int sum;
    int temp;
    
    vector<int>v1; vector<int>v2;  vector<int>v3; vector<int>v4;

    cout<<"Size of vector1: "<<endl; 
    cin>>size1;
    cout<<"Elements of vector1: "<<endl;
     for(int i=0;i<size1;i++){
        cin>>temp;
        v1.push_back(temp);
    }
    
    cout<<"Size of vector2 "; 
    cin>>size2;
    cout<<"Elements of vector2: "<<endl;
    for(int i=0;i<size2;i++){
        cin>>temp;
        v2.push_back(temp);
    }
    
    cout<<"Size of vector3: "; 
    cin>>size3;
    cout<<"Elements of vector3: "<<endl;
    for(int i=0;i<size3;i++){
        cin>>temp;
        v3.push_back(temp);
    }

    cout<<"Size of vector4: "; 
    cin>>size4;
    cout<<"Elements of vector4: "<<endl;
    for(int i=0;i<size4;i++){
        cin>>temp;
        v4.push_back(temp);
    }
    cout<<"Enter the desired sum: "; cin>>sum;

    Quadruplet(v1,v2,v3,v4,sum);
    
    return 0;
}