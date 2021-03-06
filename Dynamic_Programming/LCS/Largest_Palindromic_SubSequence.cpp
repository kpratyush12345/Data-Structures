/* Largest Palindromic SubSequence
input:
2
agbcba
zzcodedocz

output:
5
9

*/
#include <bits/stdc++.h>
using namespace std;

int lcs(string a,string b,int m,int n){
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
    string a; 
    cin>>a;
    string b=a;
    reverse(b.begin(),b.end());
    int m=a.length();
    cout<<lcs(a,b,m,m)<<endl;
}
return 0;
}
