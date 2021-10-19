//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/partition-into-subsets-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution{
    public:
    ll count(int n, int k){
        if(n == 0 || k == 0 || n<k) return 0;
        ll dp[k + 1][n + 1];
        memset(dp, 0, sizeof(dp));

        for(int i = 1;i<=k;i++){
            for(int j = 1;j<=n;j++){
                if(i == 1 || j == 1 ||j == i) dp[i][j] = 1;
                else dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1] * i;
            }
        }
        return dp[k][n];
    }
};

int main(){
    //Write the code from here
    int n,k;
    cin>>n>>k;
    Solution obj;
    ll ans = obj.count(n,k);
    cout<<ans<<endl;
    return 0;
}