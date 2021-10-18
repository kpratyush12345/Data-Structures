//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) { 
       // Your code here
       int dp[n + 1][W + 1];
       memset(dp,0,sizeof(dp));
       for(int i = 1;i<n+1;i++){
           for(int j = 1;j<W+1;j++){
               if(j >= wt[i - 1]){
                   if(dp[i-1][j - wt[i-1]] + val[i - 1] > dp[i-1][j]) dp[i][j] = dp[i-1][j - wt[i-1]] + val[i - 1];
                   else dp[i][j] = dp[i-1][j];
               }
               else dp[i][j] = dp[i-1][j];
           }
       }
       return dp[n][W];
    }
};