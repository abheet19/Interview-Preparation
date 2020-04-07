#include <bits/stdc++.h>
using namespace std;

/* given list of nos where every number is occuring twice except for 2 numbers  */

//O(n) approach without extra space

void find_unique2(int *a,int n){
	int res=0;
	for(int i=0;i<n;i++){
		res=res^a[i];
	}
	// find rightmost set bit in res
	int i=0;
	int temp=res;
	
	while(temp>0){
		if(temp>0){
			break;	
		}
		i++;
		temp=temp>>1;
		
	}
	int mask=(1<<i);
	int fno=0;
	
	for(int i=0;i<n;i++){
		if((mask & a[i])!=0){
			fno=fno^a[i];
		}
	}
	int sno=res^fno;
	cout<<fno<<endl;
	cout<<sno<<endl;
}
int main(){
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int *a=new int(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	find_unique2(a,n);
	
}

