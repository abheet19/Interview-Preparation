#include <bits/stdc++.h>
using namespace std;

//given only starting and ending indices of string,,reverse it
//use XOR swapping

string revstring(string str,int start,int end){
	//iterate loop upto start !=end
	
	while(start<end){
		str[start]=str[start] ^ str[end];
		str[end]=str[end] ^ str[start];
		str[start]=str[start] ^ str[end];
		start++;
		end--;
	}
	return str;
}

int main(){
	
	string str;
	getline(cin,str); 
	int size=str.length();
	cout<<revstring(str,0,size-1);
}
