#include <bits/stdc++.h>
using namespace std;

/* given list of nos where every number is occuring twice except one number
example: 5,2,6,9,2,5,6*/

int main(){
	
	int n;
	cout<<"enter number of elements"<<endl;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int element;
		cin>>element;
		v.push_back(element);	
	}
	int res=0;
	for(int i=0;i<n;i++){
		res=res^v[i];
		
	}
	cout<<res<<endl;
	
	
}
