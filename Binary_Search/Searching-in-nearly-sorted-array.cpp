/*Searching in a nearly Sorted array
Input-
3
5 20
5 10 30 20 40
5 30
5 10 30 20 40
5 10
5 10 30 20 40
Output-
3
2
1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int modifiedbs(int a[],int start,int end,int ele){
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            return mid;
         }
         else if(mid-1>=start && a[mid-1]==ele){
             return mid-1;
         }
         else if(mid+1<=end && a[mid+1]==ele){
             return mid+1;
         }
         else if(ele<a[mid]){
            end=mid-2;
         }
         else{
            start=mid+2;
         }
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
 
    int t;
     cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      cout<<modifiedbs(a,0,n-1,k)<<endl;
   }
return 0;   
}