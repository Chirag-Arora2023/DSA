#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int n, int m)
{   
    
    vector<int> v;
    for(int j=0;j<m;j++){
        if(j%2 == 0){
            for(int i=0;i<n;i++){
                v.push_back(arr[i][j]);
            }
        }
        else {
            for(int i=n-1;i>=0;i--)
                v.push_back(arr[i][j]);
        }

       
    }
    return v;
}