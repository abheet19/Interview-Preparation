#include <iostream>
using namespace std;
#include <bits/stdc++.h> 
int main() {
	int t;
	cin>>t;
	
	while(t!=0){
	    int n;
	    cin>>n;
	    
	    int *arr=new int[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    
	    if(n%2==0){
	        int median=(arr[(n-1)/2]+arr[n/2])/2;
	        cout<<median<<endl;
	    }
	    else{
	        int median=arr[n/2];
	        cout<<median<<endl;
	    }
	    t--;
	    delete [] arr;
	    
	    
	    
	    
	    
	}
	
}
