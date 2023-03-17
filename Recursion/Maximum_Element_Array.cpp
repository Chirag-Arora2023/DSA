#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void Maxi(vector<int>arr , int& n , int& i , int& maxi){
  //BASE CASE
  if(i>=n) return ;

  //RECURSIVE RELATION
  maxi=max(arr[i] , maxi);
  int val = i+1;
  Maxi(arr , n , val , maxi);

}

int main() {
 vector<int>arr{10,2,45,6,7,22,1,678,9,-12,12};
int n=arr.size();
int i=0;
int maxi=INT_MIN;
  Maxi(arr , n , i,maxi);
 cout<<"Maximum element in arrray is: "<< maxi;
  return 0;
}