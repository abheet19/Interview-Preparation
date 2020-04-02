#include <bits/stdc++.h>
using namespace std;

int minCount(int n){
    
   if(n<=3){
       return n;
   }
    //dp represents min count of squares for int m
    
    int *dp=new int[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    
    for(int i=4;i<=n;i++){
        int ans=i;
        
        for(int j=1;j<=i/2;j++){
            int k= i-(j*j);
            
            if(k>=0){
                ans=min(ans,dp[k]+1);
            }
        }
        dp[i]=ans;
    }
    return dp[n];    
    
}
int main(){
    
    int num;
    cin >> num;
    cout << minCount(num);
    
}


