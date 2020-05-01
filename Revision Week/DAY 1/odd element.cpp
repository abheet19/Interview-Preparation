#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t!=0){
	    int n;
	    cin>>n;
	    int *arr=new int[n+1];
	    for (int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        int count=0;
	        for(int j=0;j<n;j++){
	            if(arr[i]==arr[j])
	                count+=1;
	            
	       }
	       if(count==1)
	           cout<<arr[i]<<" ";
	           
	       
	   }
	   t--;
	   delete [] arr;
	  }
}
