#include<bits/stdc++.h>
using namespace std;

void occ(string str , int n , int& i , int& key , int& count){
    if(i>= n) return;

    if(str[i] == key) ++count;
    occ(str,n,i,key,count);
}

int main(){
    string str= "finding number of occurrences in a string.";
    int n = str.length();
    int i=0;
    int count= 0;
    int key=' ';
    occ(str , n , i , key , count);
    return 0;
}