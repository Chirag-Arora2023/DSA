#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch1= 'A';
        char ch2= 'A' + i - 1;
        for(int j=0;j<i+1;j++) cout<<ch1++;
        for(int j=0;j<i;j++) cout<<ch2--;

        cout<<endl;
    }

return 0;
}