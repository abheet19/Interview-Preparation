#include <bits/stdc++.h>
using namespace std;

/*clear ith bit of a number to 0*/

void clearbit(int &n,int i){
	int mask= ~(1<<i);
	n=n&mask;
}

int main(){
	int n;
	cout<<"enter the number "<<endl;
	cin>>n;
	int i;
	cout<<"enter the bit to clear"<<endl;
	cin>>i;
	
	clearbit(n,i);
	cout<<n;
	
	
}
