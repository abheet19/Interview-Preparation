#include <bits/stdc++.h>
using namespace std;

//here d should be a power of 2

 unsigned int getModulo(unsigned int n,unsigned int d){
	return (n & (d-1));
	
}

int main(){
	unsigned int n,d;
	cin>>n>>d;
	cout<<getModulo(n,d);
}
