#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>arr , int& n , int& i){
    if(i>=n) return;
    cout<<arr[i]<<" ";
    print(arr , n , ++i);
}

int main() {
 vector<int>arr{10,2,45,6,7,22,1,678,9,-12,12};
int n=arr.size();
int i=0;
  print(arr , n , i);
  
  return 0;
}