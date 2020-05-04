class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = prices.size();
        int diff = 0;
        for(int i=1;i<n;++i)
        {
            if(prices[i] > prices[i-1])
                diff += prices[i]-prices[i-1];
        }
        return diff;
    }
};
