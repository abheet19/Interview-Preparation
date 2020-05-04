class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 0) return "";
        
        string s = strs[0];
        int j = 0, i = 0;
        string ans;
        
        while (j < s.length()) {
            int flag = false;
            for (i = 1; i < strs.size(); i++) {
                if (j > strs[i].length() || s[j] != strs[i][j]) {
                    flag = true;
                    break;
                }
            }
            
            if (!flag)
                ans += s[j];
            else
                break;
            j++;
        }
        
        return ans;
    }
};
