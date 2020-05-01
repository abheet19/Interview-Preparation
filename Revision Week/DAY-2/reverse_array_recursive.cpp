#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& v,int start,int end){
	if(start>=end){
		return;
	}
	swap(v[start],v[end]);
	
	reverse(v,start+1,end-1);
	}

int main(){
	int n;
	cout<<"Enter size of vector/array"<<endl;
	cin>>n;
	vector<int> v;
	cout<<"Enter vector/array elements"<<endl;
	for(int i=0;i<n;i++){
		int element;
		cin>>element;
		v.push_back(element);
	}
	reverse(v,0,n-1);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
}
