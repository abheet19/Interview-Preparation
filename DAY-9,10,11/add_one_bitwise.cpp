#include <bits/stdc++.h>
using namespace std;

// add one to given number without arithmetic operators
//we flip all the bits after the rightmost 0th bit and finally 
//flip the rightmost 0th bit also

int addone(int x){
	
	int m=1;
	while(x & m){
		x=x^m;
		m<<=1;
	}
	x=x^m;
	return x;
}

int add_one_better(int x){
	return (-(~x));
}

int main(){
	int x;
	cin>>x;
	cout<<addone(x)<<endl;
	cout<<add_one_better(x);
}
