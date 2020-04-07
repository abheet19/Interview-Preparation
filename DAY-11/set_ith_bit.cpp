#include <bits/stdc++.h>
using namespace std;

/*set ith bit of a number*/

void set_ith_bit(int &n, int i){
	int mask=1<<i;
	n=(n|mask);
	
}
int main(){
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	int i;
	cout<<"enter the bit to set"<<endl;
	cin>>i;
	
	set_ith_bit(n,i);
	cout<<n;
	
}
