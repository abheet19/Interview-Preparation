#include <bits/stdc++.h>
using namespace std;


class Solution {
public:    
    vector<int> twoSum(vector<int>& v, int target) {
        vector<int> ans;
        int t;
        
        for(int i=0;i<v.size();i++){
            ans.clear();
            int t =  target-v[i];
            ans.push_back(i);
            for(int j=i+1;j<v.size();j++){
                if(t==v[j]){
                    ans.push_back(j);
                    break;
                }
            }
            if(ans.size()==2){
                break;
            }
        }
        return ans;
    }
};
