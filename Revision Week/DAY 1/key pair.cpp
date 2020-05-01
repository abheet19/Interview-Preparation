#include <iostream>
using namespace std;

int main() {
	
	int t;
	
	cin>>t;
	
	bool flag=false;
	
	while(t!=0){
	int n,x;
	cin>>n>>x;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
	    int ele;
	    cin>>ele;
	    arr[i]=ele;
	}
	
	
	
	for (int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        
	        if(arr[i]+arr[j]==x){
	            flag=true;
	        }
	    }
	    
	}
	if(flag){
	    cout<<"Yes"<<endl;
	}
	else{
	    cout<<"No"<<endl;
	}
	    t--;
}
	
}
