#include <bits/stdc++.h>
using namespace std; 
  
int odd(vector<int> &v) 
    { 
        
        int ans = v[0]; 
        for (int i = 1; i < v.size(); i++) 
            ans = ans ^ v[i]; 
  
        return ans; 
    } 
  

int main() 
    { 	
    	int n;
    	cout<<"enter the number of elements"<<endl;
    	cin>>n;
        vector<int> v(n);
        cout<<"enter array/vector elements"<<endl;
      	for(int i=0;i<n;i++){
      		int val;
      		cin>>val;
      		v.push_back(val);
		  }
		  
		cout<<"the odd element is :"<<"  ";
		cout<<odd(v)<<endl;
    }
