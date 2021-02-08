/*Find and element in a rotated Sorted array
Input-
2
8 15
11 12 15 18 2 5 6 8
6 3
12 14 16 1 3 5
Output-
2
4
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int mineleind(int a[],int n){
      int start = 0;
      int end = n-1;
      int res=-1;
      while(start<=end){
         if(a[start]<=a[end]){
            return start;
         }
         int mid = start + (end-start)/2;
         int next=(mid+1)%n;
         int prev=(mid+n-1)%n;
         if(a[mid]<=a[next] && a[mid]<=a[prev]){
            return mid;
         }
         else if(a[start]<=a[mid]){
            start=mid+1;
         }
         else if(a[end]>=a[mid]){
            end=mid-1;
         }
      }
   }

   int bs(int a[],int start,int end,int ele){
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            return mid;
         }
         else if(ele<a[mid]){
            end=mid-1;
         }
         else{
            start=mid+1;
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
      int index = mineleind(a,n);
      int f1 = bs(a,0,index-1,k);
      int f2 = bs(a,index,n-1,k);
      if(f1>0){
         cout<<f1<<endl;
      }
      else if(f2>0){
         cout<<f2<<endl;
      }
      else{
         cout<<"-1"<<endl;
      }
   }
return 0;   
}