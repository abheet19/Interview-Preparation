class Solution {
public:
    string countAndSay(int n) {
        if(n==0)
            return "";
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        string temp = "11";
        string s = "";
        for(int i=2; i<n; i++)
        {
            int count = 0;
            s = "";
            for(int j=0; j<temp.size(); j++)
            {
                if(temp[j]==temp[j+1])
                    count++;
                else
                {
                    s+=to_string(count+1);
                    s+=temp[j];
                    count=0;
    
                }
            }
            temp = s;
        }
      return s;
    }
};
