/*Rain Water Trapping
Input-
2
6
3 0 0 2 0 4
12
0 1 0 2 1 0 1 3 2 1 2 1
Output-
10
6
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       int mxl[n];
       int mxr[n];
       mxl[0]=a[0];
       for(int i=1;i<n;i++){
           mxl[i]=max(mxl[i-1],a[i]);
       }
       mxr[n-1]=a[n-1];
       for(int i=n-2;i>=0;i--){
           mxr[i]=max(mxr[i+1],a[i]);
       }
       int water[n];
       for(int i=0;i<n;i++){
           water[i]=min(mxl[i],mxr[i])-a[i];
       }
       int sum=0;
       for(int i=0;i<n;i++){
           sum+=water[i];
       }
       cout<<sum<<endl;
   } 
return 0;   
}