#include<bits/stdc++.h>
using namespace std;

void find(string str , int n , int& i , char& key){
    if(i>=n) return ;

    if(str[i] == key){
        cout<<"Key found at: "<<i<<endl;
    }
    find(str , n , ++i , key);
}

int main(){
    string str= "chiragarora";
    int n = str.length();
    int i=0;
    char key = 'a';
    //cout<<"Enter the key: "; cin>>key;
    find(str , n , i , key);

    return 0;
}