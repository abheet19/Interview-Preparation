#include <bits/stdc++.h>
using namespace std;

/*given two numbers a and b, o/p the min. no. of bits to change to convert a to b*/
int countbits(int n){
	
	int count=0;
	while(n>0){
		count+= (n & 1);
		n=n>>1;
	}
	return count;
}

int main(){
	int a,b;
	cout<<"enter the two numbers separated with space"<<endl;
	cin>>a>>b;
	
	int res=a^b;
	cout<<countbits(res);
	
}
