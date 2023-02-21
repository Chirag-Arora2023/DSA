#include<iostream>
#include<vector>
using namespace std;

int main(){

    double c,k,f;
    cout<<"Enter the temperature in celsius "; cin>>c;

    k = c + 273.15;
    f = c * 1.80  + 32.00;
    vector<double > ans;
    ans.push_back(k);
    ans.push_back(f);
    
    cout<<k<<endl<<f;

    return 0;
}