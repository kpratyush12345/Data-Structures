//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/tiling2-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution {
  public:
    long long numberOfWays(long long n, long long m) {
        //code here
        long long dp[n + 1];
        memset(dp, 0, sizeof(dp));
        
        for(int i = 1;i<=n;i++){
            if(i < m) dp[i] = 1;
            else if(i == m) dp[i] = 2;
            else dp[i] = dp[i - 1] + dp[i - m];
        }
        return dp[n];
    }
};

int main(){
    //Write the code from here
    ll n,m;
    cin>>n>>m;
    Solution obj;
    ll ans = obj.numberOfWays(n, m);
    cout<<ans<<endl;
    
    return 0;
}
