
#define min -999999             //coz INT_MIN not working dont know why
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        int localsum=min;
        int globalsum=min;
        
        if(nums.size()==1){
            return nums[0];
        }
        
        for(int i=0;i<nums.size();i++){
            localsum=max(nums[i],localsum+nums[i]);
            globalsum=max(globalsum,localsum) ;           
        }
        
        return globalsum;
    }
};
