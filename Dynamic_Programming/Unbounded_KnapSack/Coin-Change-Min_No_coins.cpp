//COIN EXCHANGE PROBLEM (MINIMUM NO OF COINS)
#include <bits/stdc++.h>
using namespace std;

int subsetsum(int a[],int sum,int n){
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
	    for(int j=0;j<sum+1;j++){
	        if(j==0){
	            dp[i][j]=0;
	        }
	        if(i==0){
	            dp[i][j]=INT_MAX-1;
	        }
	    }
	}
	
	for(int i=1;i<2;i++){
	    for(int j=0;j<sum+1;j++){
	        if(j%a[0]==0)
	        dp[i][j]=j/a[0];
	        else
	        dp[i][j]=INT_MAX-1;
	    }
	}
	
	for(int i=2;i<n+1;i++){
	    for(int j=1;j<sum+1;j++){
	        if(a[i-1]<=j){
	           dp[i][j]=min(dp[i][j-a[i-1]]+1 , dp[i-1][j]);
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
/*COIN EXCHANGE PROBLEM (MINIMUM NO OF COINS)

INPUT:
2
3 5
5 2 3 
3 5
1 2 3
OUTPUT:
1
2
*/