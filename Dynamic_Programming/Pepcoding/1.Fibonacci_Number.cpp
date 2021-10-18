//https://leetcode.com/problems/fibonacci-number/

//Recurison
class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1) return n;
        
        int fib1 = fib(n - 1);
        int fib2 = fib(n - 2);
        int fibn = fib1 + fib2;
        return fibn;
    }
};

//Memoization
class Solution {
public:
    int fibnacci(int n, vector<int> & dp){
        if(n == 0 || n == 1) return n;
        
        if(dp[n] != -1) return dp[n];
        
        int fib1 = fibnacci(n - 1, dp);
        int fib2 = fibnacci(n - 2, dp);
        int fibn = fib1 + fib2;
        return dp[n] = fibn;
    }
    int fib(int n) {
        vector<int> dp(n+1, -1);
        return fibnacci(n, dp);
    }
};

//Top Down
class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1, -1); 
        if(n == 0) return 0;
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};