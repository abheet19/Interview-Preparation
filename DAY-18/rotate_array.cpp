class Solution {

    
    void reverse(vector<int>& nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
        
        
    }
    
    public:
    
    void rotate(vector<int> & nums, int k) {
        if(nums.size()<=1){
            return;
        }
        
        //reversing the whole array
        
        reverse(nums,0,nums.size()-1);
        
        //reversing first n-d elements
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
        
        
    }
};
