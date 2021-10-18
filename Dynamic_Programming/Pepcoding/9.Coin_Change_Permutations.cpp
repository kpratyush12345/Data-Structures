//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/coin-change-permutations-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution{   
public:
    int coinPermutations(vector<int> coins, int amount){
        // code here 
        int dp[amount + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int i = 1;i<amount+1;i++){
            for(int j = 0;j<coins.size();j++){
                if(coins[j] <= i) dp[i] += dp[i - coins[j]];
            }
        }
        return dp[amount];
    }
};

int main(){
    //Write the code from here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int amount;
    cin>>amount;
    Solution obj;
    int ans = obj.coinPermutations(arr,amount);
    cout<<ans<<endl;
    return 0;
}