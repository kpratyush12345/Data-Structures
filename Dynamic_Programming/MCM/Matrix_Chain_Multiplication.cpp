/*Matrix Chain Multiplication
input :
3
5
40 20 30 10 30
5
10 20 30 40 30
3
10 20 30
output:
26000
30000
6000
*/
#include <bits/stdc++.h>
using namespace std;
int static t[100][100];
int solve(int a[],int i,int j){
  if(i>=j){
    return 0;
  }
  if(t[i][j]!=-1){
    return t[i][j];
  }
  int mn=INT_MAX;
  for(int k=i;k<j;k++){
    int temp = solve(a,i,k)+solve(a,k+1,j)+(a[i-1]*a[k]*a[j]);
    if(temp<mn){
      mn = temp;
    }
  }
  t[i][j]=mn;
  return t[i][j];
}
int main() {
  int tst;
  cin>>tst;
  while(tst--){
  	memset(t,-1,sizeof(t));
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    cout<<solve(a,1,n-1)<<endl;
  }
  return 0;
}
