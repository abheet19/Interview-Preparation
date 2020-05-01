#include <bits/stdc++.h>
using namespace std;

int staircase(int n){
	if(n==0 ||n==1){
		return 1;
	}
	
	else{
	return staircase(n-1)+(n-2);
}
}

int staircase_helper(int n,int *dp){
	if(n==0||n==1){
		return 1;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	
	int ans=staircase_helper(n-1,dp)+staircase_helper(n-2,dp);
	dp[n]=ans;
	return dp[n];
	
	
	
}

int staircase_2(int n){
	int *dp= new int[n+1];
	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}
	return staircase_helper(n,dp);
}

int staircase_3(int n){
	int *dp= new int[n+1];
	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}
	dp[0]=1;
	dp[1]=1;
	
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
		
	}
	return dp[n];
}





int main(){
	int n;
	cin>>n;
	cout<<staircase(n)+1<<endl;			//gives wrong ans for large values of n
	cout<<staircase_2(n)<<endl;
	cout<<staircase_3(n)<<endl;
	
	
}



