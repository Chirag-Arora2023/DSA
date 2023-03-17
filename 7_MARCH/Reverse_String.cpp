#include<iostream>
#include<vector>
using namespace std;

    void reverseString(vector<char>& s) {
        int l=0 , h=s.size() -1;
        while(l<h){
            swap(s[l++] , s[h--]);
        }
    }

int main(){
    vector<char>ch;
    reverseString(ch);
    for(auto i:ch)cout<<ch[i];
    return 0;
}