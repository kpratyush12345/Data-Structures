//MINIMUM SUBSET SUM DIFF
#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int a[],int sum,int n){
    int dp[n+1][sum+1];
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
	int range=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    range+=a[i];
	}
	vector <int> v;
	for(int i=0;i<=range/2;i++){
	    if(subsetsum(a,i,n)){
	        v.push_back(i);
	    }
	}
	int mn= INT_MAX;
	for(int i=0;i<v.size();i++){
	    mn = min(mn,range-2*v[i]);
	    //cout<<v[i]<<" ";
	}
	cout<<mn<<endl;
    }
return 0;
}
/*MINIMUM SUBSET SUM DIFF
input:
2
3
1 2 7
4
1 6 11 5

output:
4
1
*/