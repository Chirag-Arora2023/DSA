#include<iostream>
#include<vector>
using namespace std;

void Union(vector<int>arr1,vector<int>arr2,vector<int>uni){
    for(int i=0;i<arr1.size();i++){
        uni.push_back(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        uni.push_back(arr2[i]);
    }
    for(auto i:uni) cout<<i<<" ";
}

int main(){
    
    int size1,size2;
    int temp;
    cout<<"Size of vector1: "<<endl; 
    cin>>size1;
    cout<<"Elements of vector1: "<<endl;
    vector<int>vec1;
    vector<int>vec2;
    vector<int>uni;
     for(int i=0;i<size1;i++){
        cin>>temp;
        vec1.push_back(temp);
    }
    cout<<"Size of vector2 "; 
    cin>>size2;
    cout<<"Elements of vector2: "<<endl;
    for(int i=0;i<size2;i++){
        cin>>temp;
        vec2.push_back(temp);
    }

    Union(vec1,vec2,uni);

    // for(auto i: arr1)
    // cout<<i<<" "<<endl;

return 0;
}