//ROD CUTTING - UNBOUNDED KNAPSACK
#include <bits/stdc++.h>
using namespace std;

int maxprofit(int len[],int price[],int N){
    int dp[N+1][N+1];
    for(int i=0;i<N+1;i++){
	    for(int j=0;j<N+1;j++){
	        if(i==0 || j==0){
	            dp[i][j]=0;
	        }
	    }
	}
	for(int i=1;i<N+1;i++){
	    for(int j=1;j<N+1;j++){
	        if(len[i-1]<=j){
	           dp[i][j]=max(price[i-1] + dp[i][j-len[i-1]] , dp[i-1][j]);
	        }
	        else{
	            dp[i][j]=dp[i-1][j];
	        }
	       }
	    }
	return dp[N][N];
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int N;
	  cin>>N;
	  int price[N];
	for(int i=0;i<N;i++){
	    cin>>price[i];
	}
  int len[N];
  for(int i=0;i<N;i++){
    len[i]=i+1;
  }
	cout<<maxprofit(len,price,N)<<endl;
}
return 0;
}
/*ROD CUTTING - UNBOUNDED KNAPSACK
input:
3
8
1 5 8 9 10 17 17 20
6
2 3 5 6 8 10
4
1 1 1 1

output:
22
12
4
*/