/* LONGEST COMMON SUBSEQUENCE
input:
3
abcde
afbgcdke
abdfgersd
llkjhg
nmokledg
zzzzz
output:
5
1
0
*/
#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string a,string b,int m,int n){
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++){
	    for(int j=0;j<n+1;j++){
	        if(i==0 || j==0){
	            dp[i][j]=0;
	        }
	    }
	}
	for(int i=1;i<m+1;i++){
	    for(int j=1;j<n+1;j++){
	        if(a[i-1]==b[j-1])
	        dp[i][j]=dp[i-1][j-1]+1;
	        else
	            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
	        }
	       }
	    
	return dp[m][n];
}

int main() {
    int t;
    cin>>t;
    while(t--){
    string a,b; cin>>a>>b;
   int m=a.length();int n=b.length();
    cout<<longestCommonSubsequence(a,b,m,n)<<endl;
}
return 0;
}