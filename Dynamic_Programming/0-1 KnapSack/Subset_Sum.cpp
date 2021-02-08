#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int a[],int sum,int n){
    bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
	    for(int j=0;j<sum+1;j++){
	        if(i==0){
	            dp[i][j]=false;
	        }
	        if(j==0){
	            dp[i][j]=true;
	        }
	    }
	}
	for(int i=1;i<n+1;i++){
	    for(int j=1;j<sum+1;j++){
	        if(a[i-1]<=j){
	           dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
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
/* SUBSET SUM 
input:
3
5 11
2 3 7 8 10
6 11
2 0 7 8 10 5
6 5
2 8 6 1 3 2

output:
1
0
1
*/