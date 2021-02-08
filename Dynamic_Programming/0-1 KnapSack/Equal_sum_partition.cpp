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
    int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    sum+=a[i];
	}
	if(sum%2!=0){
	    cout<<false<<endl;
	}
	else{
	cout<<subsetsum(a,sum/2,n)<<endl;
	}
    }
return 0;
}
/*
EQUAL SUM PARTITION
INPUT:
3
5 
2 3 7 8 2
5
2 3 7 8 1
7
1 3 4 5 6 7 6 

OUTPUT:
1
0
1
*/