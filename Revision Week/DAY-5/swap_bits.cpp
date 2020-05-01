#include <bits/stdc++.h>
using namespace std;

//given unsigned int n , swap all odd bits with even bits in the number

unsigned int swapbits(unsigned int x){
	unsigned int even_bits= x & 0xAAAAAAAA;
	unsigned int odd_bits=  x & 0x55555555;
	even_bits=even_bits>>1;
	odd_bits=odd_bits<<1;
	return (even_bits|odd_bits);
	
}
int main(){
	int x;
	cin>>x;
	cout<<swapbits(x)<<endl;
	
}
