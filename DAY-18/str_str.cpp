class Solution {
public:
int strStr(string h, string n) {
if(n=="")
return 0;

  char x=n[0];
  int n1=h.length();
  int ind=-1;
  for(int i=0;i<n1;i++)
  {
      if(h[i]==x)
      {
        string compare=h.substr(i,n.length());
        if(compare==n)
          return i;
      }
  }
  
  return -1;
}

};
