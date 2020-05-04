class Solution {
public:
     void reverseString(vector<char>& s) {
        char t;
        for(int i=0;i<s.size()/2;i++)
        {
            t=s[s.size()-i-1];
            s[s.size()-i-1]=s[i];
            s[i]=t;
        }
    }
};
