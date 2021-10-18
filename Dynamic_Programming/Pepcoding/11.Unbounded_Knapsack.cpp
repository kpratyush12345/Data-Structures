//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/unbounded-knapsack-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int dp[W+1];
        memset(dp, 0, sizeof(dp));
        for(int i = 1;i<=W;i++){
            for(int j = 0;j<N;j++){
                if(i >= wt[j]){
                    if(dp[i - wt[j]] + val[j] > dp[i]) dp[i] = dp[i - wt[j]] + val[j];
                }
            }
        }
        return dp[W];
    }
};


int main(){
    //Write the code from here
    int n;
    cin>>n;
    int val[n];
    for(int i = 0;i<n;i++) cin>>val[i];

    int wt[n];
    for(int i = 0;i<n;i++) cin>>wt[i];
    int W;
    cin>>W;
    Solution obj;
    int ans = obj.knapSack(n,W,val,wt);
    cout<<ans;
    return 0;
}

   