#include <bits/stdc++.h>
using namespace std;

//multiply x by 3.5 without using arithmetic operators 
//ignore digits after decimal
//3.5x=2x+x+x/2

int multiply(int x){
	return ((x<<1)+x+(x>>1));
}
int main(){
	int x;
	cin>>x;
	cout<<multiply(x);
}
