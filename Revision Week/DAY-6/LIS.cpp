#include <bits/stdc++.h>
using namespace std;

int LIS(int *input,int n){
	int *output=new int[n];
	output[0]=1;
	
	for(int i=1;i<n;i++){
		output[i]=1;
		
		for(int j=i-1;j>=0;j--){
		
		
		if(input[j]>input[i]){
			continue;
		}
		int possible_ans=output[j]+1;
		if(possible_ans>output[i]){
			output[i]=possible_ans;
		}
	}
}
	int ans=output[n-1];
	delete [] output;
	return ans;
	
	
}
int main(){
	int n;
	cin>>n;
	
	int *input=new int[n];
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	
	cout<<LIS(input,n);
	delete [] input;
	
}
