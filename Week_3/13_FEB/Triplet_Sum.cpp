#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void Triplet(vector<int>vec1, vector<int>vec2,  vector<int>vec3,int sum){
    for(int i=0;i<vec1.size();i++){ int num1=vec1[i];
        for(int j=0;j<vec2.size();j++){ int num2 = vec2[j];
            for(int k=0; k<vec3.size();k++){ 
                if(num1+num2+vec3[k]==sum)
                cout<<"{ "<<num1<<", "<<num2<<", "<<vec3[k]<<" }"<<endl;
            }
        }
    }
}

int main(){
 int size1,size2,size3;
 int sum;
    int temp;
    
    vector<int>vec1; vector<int>vec2;  vector<int>vec3;

    cout<<"Size of vector1: "<<endl; 
    cin>>size1;
    cout<<"Elements of vector1: "<<endl;
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
    
    cout<<"Size of vector3: "; 
    cin>>size3;
    cout<<"Elements of vector3: "<<endl;
    for(int i=0;i<size3;i++){
        cin>>temp;
        vec3.push_back(temp);
    }
    cout<<"Enter the desired sum: "; cin>>sum;

    Triplet(vec1,vec2,vec3,sum);

    return 0;
}