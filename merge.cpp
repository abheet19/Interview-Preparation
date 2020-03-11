#include <iostream>
#include <climits>
using namespace std;
#define NA INT_MIN
void shift(int mPlusN[],int size){
	
	int j=size-1;
	for(int i=size-1;i>=0;i--){
		if (mPlusN[i] != NA){ 
        mPlusN[j] = mPlusN[i]; 
        j--; 
     } 
	}
}

void merge(int mPlusN[],int N[],int m,int n){
	int i=n;		//end part of mPlusN starts
	int j=0;		//array "N" 
	int k=0;		//final position array {mPlusN}
	while(k<(m+n)){
	
	if ((i < (m + n) && mPlusN[i] <= N[j]) || (j == n)) 
    { 
        mPlusN[k] = mPlusN[i]; 
        k++; 
        i++; 
    } 
    else 
    { 
       mPlusN[k] = N[j]; 
       k++; 
       j++; 
    } 
}
}

int main(){
	 int mPlusN[] = {1, 5, NA, 7, NA, NA, 18,NA, 21}; 
     int N[] = {0, 6, 8, 24}; 
     
     int m=4;
     int n=4;
     
     shift(mPlusN,m+n);
     
     merge(mPlusN,N,m,n);
     
     for(int i=0;i<m+n;i++){
     	cout<<mPlusN[i]<<" ";
	 }
}
