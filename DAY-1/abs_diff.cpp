#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int ans=abs(arr[1]-arr[0]);
		
		for(int i=2;i<n;i++){
			int diff=abs(arr[i]-arr[i-1]);
			ans=(ans<diff)? ans:diff;
		}
		int cir_diff=arr[n-1]-arr[0];
		ans=(ans<cir_diff)? ans: cir_diff;
		
		cout<<ans<<endl;
		
	}
	
	
	
}
