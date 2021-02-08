//TARGET SUM
#include <bits/stdc++.h>
using namespace std;

int countsubsetsum(int a[],int sum,int n){
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
	           dp[i][j]=dp[i-1][j-a[i-1]] + dp[i-1][j];
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
	int total=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    total+=a[i];
	}
	int s1 = (sum+total)/2;
	cout<<countsubsetsum(a,s1,n)<<endl;
    }
return 0;
}
/*TARGET SUM
input:
3
4 1
1 1 2 3
5 2
2 4 3 6 9
4 1
1 4 16 56

output:
3
2
0
*/