//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution {
public:
    ll paintHouse(vector<vector<int>>& arr) {
        ll n = arr.size();
        ll dp[n][3];

        dp[0][0] = arr[0][0];
        dp[0][1] = arr[0][1];
        dp[0][2] = arr[0][2];

        for(int i = 1;i<n;i++){
            dp[i][0] = arr[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
            dp[i][1] = arr[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = arr[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
        }
        ll res = min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));
        return res;
    }
};

int main(){
    //Write the code from here
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(3,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    Solution obj;
    ll ans = obj.paintHouse(arr);
    cout<<ans<<endl;
    return 0;
}