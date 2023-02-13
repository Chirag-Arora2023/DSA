#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int a[]={1,2,3,4,5};
    int sizea = 5;
    int b[]={5,9,8,7,6};
    int sizeb = 4;
    vector<int>unin;

    for(int i=0;i<sizea;i++)
    unin.push_back(a[i]);

    for(int i=0;i<sizeb;i++)
    unin.push_back(b[i]);

    cout<<"The union of two arrays a and b is "<<endl;
    for(int i=0;i<unin.size();i++)
    cout<<unin[i]<<" ";

return 0;
}