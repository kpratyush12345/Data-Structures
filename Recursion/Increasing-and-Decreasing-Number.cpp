#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void dec(int n){
    //base
    if(n==0) return;

    //rec case
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n){
    //base
    if(n==0) return;

    //rec case
    inc(n-1);
    cout<<n<<" ";
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
   dec(n);
   cout<<endl;
   inc(n);
   return 0;
}