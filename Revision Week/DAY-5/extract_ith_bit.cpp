#include <bits/stdc++.h>
using namespace std;

int get_ith_bit(int n,int i){
	
	return (n & (1<<i))!=0?1:0;
	
}

int main(){
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	int i;
	cout<<"enter the bit to extract"<<endl;
	cin>>i;
	
	cout<<get_ith_bit(n,i);
	
}
