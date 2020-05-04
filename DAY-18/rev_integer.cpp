class Solution {
public:
    int reverse(int x) {
	
		long ans = 0;
		
		while (x != 0) {
			int r = x%10;
			x /= 10;
			ans = ans*10 + r;
		}
        
		if (ans > INT_MAX || ans < INT_MIN)
			return 0;
			
		return ans;
    }
};
