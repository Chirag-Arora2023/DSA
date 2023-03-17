#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printarr(vector<int>& arr , int& n , int i){
    if(i>=n)return;
    cout<<arr[i]<<" ";
    printarr(arr,n,i+1);
}

void findMax(vector<int>& arr , int n,int i,int& maxi){
    if(i>=n)return;
    maxi=max(arr[i],maxi);
    findMax(arr,n,i+1,maxi);
}
void findMini(vector<int>& arr,int& n,int i,int& mini){
    if(i>=n)return;
    mini=min(arr[i] , mini);
    findMini(arr,n,++i,mini);
}

bool findCh(string& str ,int l,int i,char key){
    if(i>=l)return false;
    if(str[i] == key)return true ;
    findCh(str,l,i+1,key);
}
int firstOcc(string& str, int& l,int i,char& key){
    if(i>=l)return -1;
    if(str[i]==key)return i;
    firstOcc(str,l,++i,key);
}
void allOcc(string& str,int& l,int i,char& key){
    if(i>=l)return ;
    if(str[i]==key) cout<<i<<" ";
    allOcc(str,l,++i,key);
}
void countOcc(string& str,int& l,int i,char& key,int& count){
    if(i>=l)return;
    if(str[i]==key)count++;
    countOcc(str,l,++i,key,count);
}

int main() {
    vector<int>arr{1,3,6,2,5,8,2,4,99, -2383};
    int n= arr.size();
    int i=0;
    int maxi=INT_MIN , mini=INT_MAX;
    printarr(arr,n,i); cout<<endl;
    findMax(arr,n,i,maxi);
    cout<<"Maximum element in the array: "<<maxi<<endl;
    findMini(arr,n,i,mini);
    cout<<"Minimum element in the array: "<<mini<<endl;

    string str="Chirag Arora is the best at everything.";
    int l = str.length();
    char key = 't';
     findCh(str,l,i,key)? cout<<key<<" found"<<endl: cout<<key<<" not found"<<endl;

    cout<<"The first occurrence of the key is at: "<< firstOcc(str,l,i,key)<<endl;
    cout<<"All occurrences of the key are: ";
    allOcc(str,l,i,key);
    cout<<endl;
    int count=0;
    countOcc(str,l,i,key,count);
    cout<<"Number of occurrences of the key is: "<<count<<endl;
  return 0;
}