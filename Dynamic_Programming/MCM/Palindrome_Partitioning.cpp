/*Palindrome Partitioning
input :
2
nitin
nitik
output:
0
2
*/
#include <bits/stdc++.h>
using namespace std;
int static t[100][100];
bool isPalindrome(string s,int i,int j){
	if(i==j){
		return true;
	}
	if(i>j){
		return true;
	}
	while(i<j){
		if(s[i]!=s[j]){
			return false;
		}
		i++;
		j--;
	}
  return true;
}
int solve(string a,int i,int j){
  if(i>=j){
    return 0;
  }
  if(isPalindrome(a,i,j)==true){
  	return 0;
  }
  if(t[i][j]!=-1){
    return t[i][j];
  }
  int mn=INT_MAX;
  int left,right;
  for(int k=i;k<j;k++){
  	if(t[i][k]!=-1){
  		left = t[i][k];
  	}
  	else{
  		left = solve(a,i,k);
  		t[i][k]=left;
  	}
  	if(t[k+1][j]!=-1){
  		right = t[k+1][j];
  	}
  	else{
  		right = solve(a,k+1,j);
  		t[k+1][j]=right;
  	}
    int temp = 1+left+right;
    if(temp<mn){
      mn = temp;
    }
  }
  return t[i][j]=mn;
}
int main() {
  int tst;
  cin>>tst;
  while(tst--){
  	memset(t,-1,sizeof(t));
    string a;
    cin>>a;
    cout<<solve(a,0,a.length()-1)<<endl;
  }
  return 0;
}