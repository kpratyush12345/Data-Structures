#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int fact(int n){
    //base case
    if(n==0) return 1;

    //recursive case
    return n * fact(n - 1);
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
   cout<<fact(n)<<endl;   
   return 0;
}