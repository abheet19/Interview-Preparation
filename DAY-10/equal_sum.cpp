#include <bits/stdc++.h>
using namespace std;

//find the count of +ve integer 'i' such that 0<=i<=n  and n+i=n^i      -----time comp=o(log n)    

int countvalues(int n){
	int unset_bits=0;
	while(n){
		if((n & 1)==0){
			unset_bits++;
		}
		n=n>>1;
	}
	return 1<<unset_bits;
}

int main(){
	int n;
	cin>>n;
	cout<<countvalues(n);
	
	
}
