/* PRINT LONGEST COMMON SUBSEQUENCE
input:
3
abcde
afbgcdke
nmokledg
zzzzz
abdfgersd
llkjhg

output:
abcde

g
*/
#include <bits/stdc++.h>
using namespace std;

string printLCSubsequence(string a,string b,int m,int n){
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
	int i=m;int j=n;
    string s;
    while(i>0 && j>0){
    	if(a[i-1]==b[j-1]){
    		s.push_back(a[i-1]);
    		i--;j--;
    	}
    	else{
    		if(dp[i][j-1]>dp[i-1][j]){
    			j--;
    		}
    		else{
    			i--;
    		}
    	}
    }
    reverse(s.begin(),s.end());
    return s;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    string a,b; cin>>a>>b;
    int m=a.length();int n=b.length();    
    
    cout<<printLCSubsequence(a,b,m,n)<<endl;
}
return 0;
}