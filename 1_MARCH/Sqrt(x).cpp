class Solution {
public:
    int mySqrt(int x) {
    //    int s=1, e=x;
    //    int ans =0;
    //    if(x ==0)return 0;
    //    while(s <= e){
    //        int m = s + (e-s)/2;
    //        if(m  == x/m) return m;
    //        else if(m  < x/m){
    //            ans = m;
    //            s = m+1;
    //        }
    //        else e = m-1;
    //    }
    //     return ans;


    long long int s=1, e=x;
       long long int ans =0;
       if(x ==0)return 0;
       while(s <= e){
           long long int m = s + (e-s)/2;
           if(m*m  == x) return m;
           else if(m*m  < x){
               ans = m;
               s = m+1;
           }
           else e = m-1;
       }
        return ans;
    }
};