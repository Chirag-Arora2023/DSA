#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void Mini(vector<int>arr , int& n , int& i , int& mini){
  //BASE CASE
  if(i>=n) return ;

  //RECURSIVE RELATION
  mini=min(arr[i] , mini);
  int val = i+1;
  Mini(arr , n , val , mini);

}

int main() {
    vector<int>arr{10,2,45,6,7,22,1,678,9,-12,12};
    int n=arr.size();
    int i=0;
    int mini=INT_MAX;
    Mini(arr , n , i,mini);
    cout<<"Minimum element in arrray is: "<< mini;
  return 0;
}