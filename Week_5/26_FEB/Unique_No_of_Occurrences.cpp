#include<bits/stdc++.h>
using namespace std;
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin() , arr.end());
        vector<int> ans;
        int i=0;
       while(i<n){
            int count =1;
            for(int j=i+1;j<n;j++){
                if(arr[i] == arr[j])
                    count++;
            }
            ans.push_back(count);
            i+=count;
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size() - 1;i++){
            if(ans[i] == ans[i+1])
                return false;
        }
        return true;
    }

    int main(){
        vector<int> arr = {1,2,2,3,3,3};
        int n = arr.size();
        bool ans =uniqueOccurrences(arr);
        cout<<ans;
    }
