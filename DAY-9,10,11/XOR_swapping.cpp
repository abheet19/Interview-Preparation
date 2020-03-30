#include <bits/stdc++.h>
using namespace std;

/*XOR SWAPPING*/

int main(){
	int a,b;
	cout<<"Enter the two numbers separated by space"<<endl;
	cin>>a>>b;
	
	a=a^b;
	b=b^a;
	a=a^b;
	
	cout<<a<<"  "<<b;
	
}
