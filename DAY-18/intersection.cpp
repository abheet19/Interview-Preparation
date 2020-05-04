class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> v;
        if(m==0||n==0)
            return v;
        for(int p=0;p<m;p++){
            for(int q=0;q<n;q++){
                if(nums1[p]==nums2[q]){
                    v.push_back(nums1[p]);
                    nums2[q]=INT_MIN;
                    break;
                }
            }
        }
        return v;
    }
};
