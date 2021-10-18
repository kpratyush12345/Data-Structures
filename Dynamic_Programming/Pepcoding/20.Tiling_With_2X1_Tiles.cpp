//https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution {
  public:
    long long numberOfWays(long long N) {
        //code here
        long long dp[N + 1];
        memset(dp, 0, sizeof(dp));
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i = 3;i<=N;i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[N];
    }
};

int main(){
    //Write the code from here
    ll n;
    cin>>n;
    Solution obj;
    ll ans = obj.numberOfWays(n);
    cout<<ans<<endl;
    
    return 0;
}