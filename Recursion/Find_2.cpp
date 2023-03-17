#include<iostream>
#include<vector>
using namespace std;

void find(string& str,int& n,int i,char& key,vector<int>& ans){
    if(i>=n) return;

    if(str[i]==key){
       cout<<"found at  "<<i<<endl;
       ans.push_back(i);
    }

    find(str,n,++i,key,ans);
}

int main(){
     string str = "Finding an element in a string using recursion.";
     int n = str.length();
     int i=0;
     char key = 'n';
     vector<int>ans;

     find(str,n,i,key,ans);
     for(auto i:ans)cout<<ans[i]<<" ";
     cout<<endl;
     cout<<"size of ans vector is "<<ans.size();
     return 0;
}
