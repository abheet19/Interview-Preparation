#include<bits/stdc++.h>
using namespace std; 
  
void update(vector<int> &v) 
{ 
    
    if (v.size()<= 1) 
      return; 
  
    int n=v.size();
    int prev = v[0]; 
    v[0] = v[0] * v[1]; 
  
    
    for (int i=1; i<n-1; i++) 
    { 
        
        int curr = v[i]; 
  
         
        v[i] = prev * v[i+1]; 
  
        
        prev = curr; 
    } 
  
   
    v[n-1] = prev * v[n-1]; 
} 
 
int main() 
{ 	
	cout<<"enter number of elements"<<endl;
	int n;
	cin>>n;
	
    vector<int> v;
    cout<<"enter array/vector elements"<<endl;
    for (int i=0;i<n;i++){
    	int element;
    	cin>>element;
    	v.push_back(element);
	}
    
    update(v); 
    for (int i=0; i<n; i++) 
      cout << v[i] << " "; 
    
} 
