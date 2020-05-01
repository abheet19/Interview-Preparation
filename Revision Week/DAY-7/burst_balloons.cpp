
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        int n=nums.size();
        
       vector<vector<int>> dp(n,vector<int>(n,0));  // this means 2d vector is initialized  to 0
                                                    //can also take 2d array no problem
        

        
        for(int len=1;len<=n;len++){
            for(int i=0;i<=n-len;i++){
                int j=i+len-1;
                
                for(int k=i;k<=j;k++){
                    int leftval=1;
                    int rightval=1;
                    
                    if(i!=0){
                        leftval=nums[i-1];
                    }
                    if(j!=n-1){
                        rightval=nums[j+1];
                    }
                    
                    int before=0;
                    int after=0;
                    
                    if(i!=k){
                        before=dp[i][k-1];
                    }
                    if(j!=k){
                        after=dp[k+1][j];
                    }
                    int value= leftval*nums[k]*rightval +before+after ;
                    
                  dp[i][j]=max(value,dp[i][j]);  
                    
                }
             }
         }
        
    return dp[0][n-1];
        
    }
};
