//https://practice.geeksforgeeks.org/problems/coin-change2448/1
//https://leetcode.com/problems/coin-change-2/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution{   
public:
    int coinCombinations(vector<int> coins, int amount){
        // code here 
        int dp[amount + 1];
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for(int i = 0;i<coins.size();i++){
            for(int j = coins[i];j < amount + 1;j++){
                dp[j] += dp[j - coins[i]];
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
    int ans = obj.coinCombinations(arr,amount);
    cout<<ans<<endl;
    return 0;
}