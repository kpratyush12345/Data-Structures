//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/friends-pairing-official/ojquestion
//https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution{
public:
    int countFriendsPairings(int n) { 
        // code here
        int dp[n+1];
        memset(dp, 0, sizeof(dp));
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3;i<=n;i++){
            dp[i] = dp[i - 1] + dp[i - 2] * (i - 1);
        }
        return dp[n];
    }
}; 

int main(){
    //Write the code from here
    int n;
    cin>>n;
    Solution obj;
    int ans = obj.countFriendsPairings(n);
    cout<<ans<<endl;
    return 0;
}