#include <iostream>
using namespace std;

int maxposition(int *arr,int size){
    int max=0;
    int p;
    for(int i=1;i<size;i+=2){
        if(arr[i]>max){
            max=arr[i];
            p=i;
        }
    }
    return p;
    
}


int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int nt;
	    cin>>nt;
	    int n;
	    cin>>n;
	    int *arr=new int[2*n];
	    for(int i=0;i<2*n;i++){
	       cin>>arr[i]; 
	       }
	    int p,gc=0;
	    while(nt!=0){
	        
	        p=maxposition(arr,2*n);
	        if(nt-arr[p-1]>=0){
	            gc+=arr[p-1]*arr[p];
	            arr[p]=0;
	            nt-=arr[p-1];
	        }
	        else{
	            gc+=nt*arr[p];
	            nt=0;
	        }
	        
	        
	    }
	    cout<<gc<<endl;
	   delete [] arr; 
	   }
	   
}

