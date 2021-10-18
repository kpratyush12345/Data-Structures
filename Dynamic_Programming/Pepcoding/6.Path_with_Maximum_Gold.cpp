//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/goldmine-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int dp[n][m];
        for(int j = m - 1;j>=0;j--){
            for(int i = n-1;i>=0;i--){
                if(j == m - 1) dp[i][j] = grid[i][j];
                else if(i == 0) dp[i][j] = grid[i][j] + max(dp[i][j+1],dp[i+1][j+1]);
                else if(i == n-1) dp[i][j] = grid[i][j] + max(dp[i][j+1],dp[i-1][j+1]);
                else dp[i][j] = grid[i][j] + max(dp[i][j+1],max(dp[i+1][j+1],dp[i-1][j+1]));
            }
        }
        int mx = dp[0][0];
        for(int i = 1;i<n;i++){
            mx = max(mx,dp[i][0]);
        }
        return mx;
    }
};

int main(){
    //Write the code from here
    int n, m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    Solution obj;
    int ans = obj.getMaximumGold(arr);
    cout<<ans<<endl;
    return 0;
}