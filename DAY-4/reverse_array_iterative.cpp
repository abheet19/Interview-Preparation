#include <bits/stdc++.h> 
using namespace std; 

void reverse(vector<int> &v,int n){
	int start=0;
	int end=n-1;
	while(start<end){
		swap(v[start],v[end]);
		start++;
		end--;
	}
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
	reverse(v,n);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
	
	
}
