#include <bits/stdc++.h>
using namespace std;

//detect if 2 integers have opposite signs using bitwise operators
//-ve numbers have sign bit =1

bool check(int x,int y){
	return ((x^y)<0);
	
}

//following valid for only 32 bit integers
//use right shift to shift the sign bit to LSB position and check if it is 0 or 1

bool check_2(int x,int y){
	return ((x^y)>>31);
}

int main(){
	int x,y;
	cin>>x>>y;
	
	cout<<check(x,y)<<endl;
	cout<<check_2(x,y)<<endl;
}
