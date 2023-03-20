#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int cutRod(int len,int& x,int& y , int& z){
    if(len == 0)return 0;
    if(len < 0) return INT_MIN;

    int maxi = INT_MIN;

    //cutting segment of length x
    int ansx = cutRod(len-x,x,y,z)+1;

    //cutting segment of length y
    int ansy = cutRod(len-y,x,y,z)+1;

    //cutting segment of length z;
    int ansz = cutRod(len-z,x,y,z)+1; 

    return max(ansx,max(ansy,ansz));
}

int main() {
    int len = 7 , x=5 , y=2, z=2 ;
    int ans = cutRod(len,x,y,z);
    cout<<"The maximum number of segments = "<<ans<<endl;
  return 0;
}