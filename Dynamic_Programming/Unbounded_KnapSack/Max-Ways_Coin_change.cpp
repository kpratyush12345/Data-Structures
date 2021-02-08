/* COIN CHANGE PROBLEM(MAXIMUM NO OF WAYS)
INPUT:
2
3 4
1 2 3 
3 5
1 2 3
OUTPUT:
4
5
*/

#include <bits/stdc++.h>
using namespace std;

int subsetsum(int a[],int sum,int n){
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
	    for(int j=0;j<sum+1;j++){
	        if(i==0){
	            dp[i][j]=0;
	        }
	        if(j==0){
	            dp[i][j]=1;
	        }
	    }
	}
	for(int i=1;i<n+1;i++){
	    for(int j=1;j<sum+1;j++){
	        if(a[i-1]<=j){
	           dp[i][j]=dp[i][j-a[i-1]] + dp[i-1][j];
	        }
	        else{
	            dp[i][j]=dp[i-1][j];
	        }
	       }
	    }
	return dp[n][sum];
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n,sum;
	cin>>n>>sum;
	int a[n];
	
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	cout<<subsetsum(a,sum,n)<<endl;
    }
return 0;
}