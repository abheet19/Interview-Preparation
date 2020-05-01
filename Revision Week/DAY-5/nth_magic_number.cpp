#include<bits/stdc++.h> 
using namespace std; 

//here magic number is a no. which can be expressed as a power of 5 or sum of unique powers of 5
//magic series example: 5 , 25 , 30 , 125, 130 ,,,,,,

int nth_magic_no(int n){
	int pow=1;
	int ans=0;
	
	while(n){
		pow=pow*5;
		//if the last bit of n is set (1)
		
		if(n & 1){
			ans+=pow;
		}
		n>>=1;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<nth_magic_no(n);
	
}
