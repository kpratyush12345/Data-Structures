#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int power(int a,int n){
    if(n==0) return 1;
    return a * power(a,n-1);
}

int fast_power(int a,int n){
    if(n==0) return 1;

    int smaller_ans = fast_power(a,n/2);
    smaller_ans *= smaller_ans;

    if(n&1) return smaller_ans * a;

    return smaller_ans;
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   
   int a,n;
   cin>>a>>n;
   cout<<fast_power(a,n);
   return 0;
}