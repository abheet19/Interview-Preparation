#include <bits/stdc++.h>
using namespace std;

/* generate subsequences of a string*/

void filterChars(char *a, int no){
	int i=0;
	while(no>0){
		
		(no & 1)? cout<<a[i]:cout<<"";
		i++;
		no=no>>1;
	}
	cout<<endl;
}
void generateSubsets(char *a){
	//gen a range of nos from 0 to (2^n -1)
	
	int n=strlen(a);
	int range=(1<<n)-1;
	for(int i=0;i<=range;i++){
		filterChars(a,i);
	}
}

int main(){
	
	char a[100];
	cin>>a;
	generateSubsets(a);
	
}




