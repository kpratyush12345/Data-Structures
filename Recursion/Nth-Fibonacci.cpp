#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int fib(int n){
    //base case
    if(n==0 or n==1) return n;

    //rec case
    int f1 = fib(n-1);
    int f2 = fib(n-2);
    return f1 + f2;
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   
  int n;
  cin>>n;
  cout<<fib(n)<<endl;
   return 0;
}