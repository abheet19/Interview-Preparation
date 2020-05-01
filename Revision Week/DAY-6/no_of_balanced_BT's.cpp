#include <iostream>
#include<cmath>
using namespace std;
int balancedBTs(int h) {
     
    
    if(h<=1)
        return 1;
    
    int x=balancedBTs(h-1);
    int y=balancedBTs(h-2);
    
    int mod=(int)pow(10,9)+7;
    
    long temp1=(long)((long)x*x)%mod;
    long temp2=(long)(2*(long)x*y);
    int ans=(temp1+temp2)%mod;
    
    return ans;

}

int binaryTreesOfHeightH(int h) {
    int *dp=new int[h+1];
    
    if(h<=1)
        return 1;
    
    dp[0]=1;
    dp[1]=1;
    
    int mod= (int)(pow(10,9))+7;
    
    for(int i=2;i<=h;i++){
        long temp1=(long)((long)dp[i-1]*dp[i-1]);
        temp1=temp1%mod;
        long temp2=2*(long)((long)dp[i-1]*dp[i-2]);
        temp2=temp2%mod;
        
        dp[i]=(temp1+temp2)%mod;
    }
    int ans=dp[h];
    
    
    return ans;

}

int main() {
    int h;
    cin >> h;
    int ans = binaryTreesOfHeightH(h);
    ans = ans % ((int)(pow(10, 9)) + 7);
    cout << ans << endl;
    
    ans=balancedBTs(h);
    //ans=ans %((int)(pow(10,9))+7);
    cout<<ans<<endl;
}


