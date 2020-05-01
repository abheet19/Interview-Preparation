#include <iostream>
using namespace std;

int main(){
int t;
cin>>t;


while(t--){
    int n;
    cin>>n;
    int *arr=new int[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum=(n*(n+1))/2;
    int array_sum=0;
    
    for(int i=0;i<n-1;i++){
        array_sum+=arr[i];
    }
    int missing_no=sum-array_sum;
    cout<<missing_no<<endl;
}
}
