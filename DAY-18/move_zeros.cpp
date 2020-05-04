class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int count =0;
    int n=nums.size();
        
    for(int i=0;i<n;i++){
        
        if(nums[i]==0)count++;
    }
        
    int k =0;
        
    for(int i=0;i<n;i++){
        
    if(nums[i]!=0) 
        nums[k++]=nums[i];
        
    }
    while(k<n) 
        nums[k++]=0;
    }
};
