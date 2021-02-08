/*Min Difference element in Sorted Array
Input-
3
3 7
4 6 10
6 12
1 3 8 10 12 15
5 12
1 3 8 10 15
Output-
6
12
10
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int bs(int a[],int n,int ele){
      int start = 0;
      int end = n-1;
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            return a[mid];
         }
         else if(ele<a[mid]){
            end=mid-1;
         }
         else{
            start=mid+1;
         }
      }
      int mn=min(abs(a[start]-ele),abs(a[end]-ele));
      if(abs(a[start]-ele)==mn){
          return a[start];
      }
      else if(abs(a[end]-ele)==mn){
          return a[end];
      }
      return -1;
   }
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 
   ll t;
   cin>>t;
   while (t--){
       int n,k;
       cin>>n>>k;
       int a[n];
       for (int i = 0; i < n; i++){
           cin>>a[i];
       }
        cout<<bs(a,n,k)<<endl;      
   }
   
    
return 0;   
}