#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int divide(int D , int d){
    int s= 0 , e = D , m= 0;
    int ans = 0;
    while(s <= e){
        m=s+(e-s)/2;

        if(d*m == D) {
            ans = m;
            break;
        }
        else if(m*d < D){
            ans = m;
            s= m+1;
        }
        else e= m-1;

        
    }
    return ans;
}

int main(){
    int dividend = 65;
    int divisor= 64;
    int ans = divide(dividend , divisor);
    cout<<ans;
}
