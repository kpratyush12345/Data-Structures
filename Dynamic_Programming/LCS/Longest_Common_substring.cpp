/* LONGEST COMMON SUBSTRING
input:
3
abcde
fabcde
abcde
abfce
aqwnkisopa
aaakiqwnk
output:
5
2
4
*/
#include <bits/stdc++.h>
using namespace std;

bool longestCommonSubstring(string a,string b,int m,int n){
    bool dp[m+1][n+1];
    bool res=0;
    for(int i=0;i<m+1;i++){
	    for(int j=0;j<n+1;j++){
	        if(i==0 || j==0){
	            dp[i][j]=0;
	        }
	    }
	}
	for(int i=1;i<m+1;i++){
	    for(int j=1;j<n+1;j++){
	        if(a[i-1]==b[j-1]){
	        dp[i][j]=dp[i-1][j-1] || true;
	        res = res || dp[i][j];}
	        else{
	            dp[i][j]=0;}
	        }
	       }
	    
	return res;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    string a,b; cin>>a>>b;
   int m=a.length();int n=b.length();
    cout<<longestCommonSubstring(a,b,m,n)<<endl;
}
return 0;
}