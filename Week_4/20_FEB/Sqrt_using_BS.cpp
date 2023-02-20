#include<iostream>
#include<vector>
using namespace std;

int Sqrt(int n){
    int s = 0 , e = n - 1 , ans = -1;
    int m = s + ( e - s ) / 2 ;

    while( s <= e ){
        if(m * m == n) return m;
        else if (m * m < n){
            ans = m ;
            s = m + 1 ;
        }
        else e = m - 1 ;
        m = s + ( e - s ) / 2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number "; cin>>n;

    int precision ; double sqroot;
    cout<<"Enter the number of decimal digits"; cin>>precision;
    int ans = Sqrt(n);
    double step = 0.1;
    for(int i=0; i< precision;i++){
        for(double j=ans; j*j <= ans+1; j+=step){
            sqroot = j;
        }
        step = step/10;
    }
    cout<<sqroot;

    
    // cout<< "The square root of the given number is "<<ans;


return 0;
}