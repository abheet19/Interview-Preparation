#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int *arr=new int[n];
	    int flag=false;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	   }
	   for (int i=0;i<n;i++){
	       int count=0;
	       int condition=n/2;
	       for(int j=i;j<n;j++){
	           if(arr[i]==arr[j])
	                count++;
	       }
	       if(count>condition){
	           cout<<arr[i]<<" ";
	            flag=true;
	       }
	       
	   }
	   if(!flag)
	       cout<<-1<<endl;;
	   }
	    
	    
	  
}
