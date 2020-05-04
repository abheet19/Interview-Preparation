class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=0, n=digits.size(), x;
        i=n-1;
        while(i>=0)
        { 
            x=digits[i]+1;
            if(x<10)
            {
                digits[i]=x;
                return digits;
            }
            else
            {
                digits[i]=0;
                i--;
            }
        }
        if(digits[0]==0)
        {
            digits.insert(digits.begin(),1);
            return digits;
        }
        return digits;
    }
};
