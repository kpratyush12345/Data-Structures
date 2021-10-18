//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/target-sum-subsets-dp-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution{   
public:
    bool isSubsetSum(int n, int arr[], int sum){
        // code here 
        int dp[n + 1][sum + 1];
        memset(dp,0,sizeof(dp));
        for(int i = 0;i<n+1;i++){
            for(int j = 0;j<sum+1;j++){
                if(i == 0 && j == 0) dp[i][j] = 1;
                else if(i == 0) dp[i][j] = 0;
                else if(j == 0) dp[i][j] = 1;
                else {
                    if(dp[i - 1][j] == 1) dp[i][j] = 1;
                    else {
                        int val = arr[i - 1];
                        if(j >= val){
                            if(dp[i - 1][j - val] == 1) dp[i][j] = 1;
                        }
                    }
                }
            }
        }
        // for(int i = 0;i<n+1;i++){
        //     for(int j = 0;j<sum+1;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[n][sum];
    }
};

int main(){
    //Write the code from here
    int n, sum;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cin>>sum;
    Solution obj;
    int ans = obj.isSubsetSum(n,arr,sum);
    if(ans == 0) cout<<"false\n";
    else cout<<"true\n";
    return 0;
}