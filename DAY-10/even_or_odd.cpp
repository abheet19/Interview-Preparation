#include <bits/stdc++.h>
using namespace std;

/* Check if number is even or odd using bitwise*/

int main(){
	
	int n;
	cin>>n;
	
	if(n & 1 ){
		cout<<"odd";
	}
	else{
		cout<<"even";
	}
}
