#include <bits/stdc++.h> 
using namespace std; 

  
  
int triplet_product(int arr[],int n){
	if(n<3){
		return INT_MIN;
	}
	
	int largest=INT_MIN,second_largest=INT_MIN,third_largest=INT_MIN;
	int smallest=INT_MAX,second_smallest=INT_MAX;
	
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			third_largest=second_largest;
			second_largest=largest;
			largest=arr[i];
		}
		else if(arr[i]>second_largest){
			third_largest=second_largest;
			second_largest=arr[i];	
		}
		else if(arr[i]>third_largest){
			third_largest=arr[i];
		}
		if(arr[i]<smallest){
			second_smallest=smallest;
			smallest=arr[i];
		}
		else if(arr[i]<second_smallest){
			second_smallest=arr[i];
		}
	}
	return max(largest*second_largest*third_largest,largest*smallest*second_smallest);
}
int main(){
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int *arr=new int(n);
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=triplet_product(arr,n);
	if(max==INT_MIN){
		cout<<"no triplet"<<endl;
	}
	else{
	
	cout<<"The max product of triplets in this array is:"<<endl;
	cout<<max<<endl;
	}
}
