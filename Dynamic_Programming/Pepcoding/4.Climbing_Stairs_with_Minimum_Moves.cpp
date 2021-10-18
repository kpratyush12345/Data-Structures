//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-minimum-moves-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution{
    public:
        int minMoves(vector<int>& arr){
            int n = arr.size();
            vector<int> dp(n + 1, -1);
            dp[n] = 0;
            for(int i = n-1;i>=0;i--){
                if(arr[i] > 0){
                    int mn = INT_MAX;
                    for(int j = 1;j<=arr[i] && i+j < dp.size();j++){
                        if(dp[i + j] != -1){
                            mn = min(mn, dp[i+j]);
                        }
                    }
                    if(mn != INT_MAX){
                        dp[i] = mn + 1;
                    }
                }
            }
            return dp[0];
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
    Solution obj;
    int ans = obj.minMoves(arr);
    cout<<ans<<endl;
    return 0;
}