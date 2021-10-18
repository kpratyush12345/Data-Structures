//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-house-many-colors-official/ojquestion


//O(n3) Approach
//---------------------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void dfile(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
}

class Solution {
public:
    ll paintHouse2(vector<vector<int>>& arr) {
        ll n = arr.size();
        ll m = arr[0].size();
        ll dp[n][m];
        ll mn = INT_MAX;
        for(int i = 0;i<m;i++){
            dp[0][i] = arr[0][i];
        }

        for(int i = 1;i<n;i++){
            for(int j = 0;j<m;j++){
                int mn = INT_MAX;
                for(int k = 0;k<m;k++){
                    if(k != j){
                        if(dp[i - 1][k] < mn) mn = dp[i - 1][k];
                    }
                }
                dp[i][j] = arr[i][j] + mn;
            }
        }

        for(int i = 0;i<m;i++){
            if(dp[n - 1][i] < mn) mn = dp[n - 1][i];
        }
        return mn;
    }
};

int main(){
    dfile();
    //Write the code from here
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    Solution obj;
    ll ans = obj.paintHouse2(arr);
    cout<<ans<<endl;
    return 0;
}


//Optimised Approach
//--------------------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void dfile(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
}

class Solution {
public:
    int paintHouse2(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int dp[n][m];
        memset(dp, 0, sizeof(dp));

        int least = INT_MAX, sec_least = INT_MAX;

        //Finding least and second least
        for(int j = 0;j < m;j++){
            dp[0][j] = arr[0][j];

            if(arr[0][j] <= least){
                sec_least = least;
                least = arr[0][j];
            } else if(arr[0][j] <= sec_least){
                sec_least = arr[0][j];
            }
        }

        for(int i = 1;i<n;i++){
            int new_least = INT_MAX, new_SecLeast = INT_MAX;
            for(int j = 0;j<m;j++){
                if(least == dp[i - 1][j]) dp[i][j] += arr[i][j] + sec_least;
                else dp[i][j] += arr[i][j] + least;

                if(dp[i][j] <= new_least){
                    new_SecLeast = new_least;
                    new_least = dp[i][j];
                } else if(dp[i][j] <= new_SecLeast){
                    new_SecLeast = dp[i][j];
                }
            }
            least = new_least;
            sec_least = new_SecLeast;
        }
        return least;
    }
};

int main(){
    dfile();
    //Write the code from here
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    Solution obj;
    int ans = obj.paintHouse2(arr);
    cout<<ans<<endl;
    return 0;
}


//Without Space
//---------------
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution {
public:
    int paintHouse2(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int min = INT_MAX, smin = INT_MAX;

        //Finding least and second least
        for(int j = 0;j < m;j++){
            if(arr[0][j] <= min){
                smin = min;
                min = arr[0][j];
            } else if(arr[0][j] <= smin){
                smin = arr[0][j];
            }
        }

        for(int i = 1;i<n;i++){
            int cmin = INT_MAX, csmin = INT_MAX;
            for(int j = 0;j<m;j++){
                if(arr[i - 1][j] != min){
                    arr[i][j] += min;
                } else {
                    arr[i][j] += smin;
                }

                if(arr[i][j] <= cmin){
                    csmin = cmin;
                    cmin = arr[i][j];
                } else if(arr[i][j] <= csmin){
                    csmin = arr[i][j];
                }
            }

            min = cmin;
            smin = csmin;
        }
        return min;
    }
};

int main(){
    //Write the code from here
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    Solution obj;
    int ans = obj.paintHouse2(arr);
    cout<<ans<<endl;
    return 0;
}