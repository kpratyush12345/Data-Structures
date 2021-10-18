//https://leetcode.com/problems/minimum-path-sum/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int dp[n][m];
        for(int i = n-1;i>=0;i--){
            for(int j = m-1;j>=0;j--){
                if(i == n-1 && j == m-1) dp[i][j] = grid[i][j];
                else if(i == n-1) dp[i][j] = dp[i][j+1] + grid[i][j];
                else if(j == m-1) dp[i][j] = dp[i+1][j] + grid[i][j];
                else dp[i][j] = min(dp[i][j+1],dp[i+1][j]) + grid[i][j];
            }
        }
        return dp[0][0];
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
    int ans = obj.minPathSum(arr);
    cout<<ans<<endl;
    return 0;
}