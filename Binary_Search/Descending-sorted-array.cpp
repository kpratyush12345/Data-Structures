/*Descending Sorted array
Input-
2
10 4
20 17 15 14 13 12 10 9 8 4
5 6
30 25 22 7 5
Output-
9
-1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int dbinarys(int a[],int n,int ele){
      int start = 0;
      int end = n-1;
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            return mid;
         }
         else if(ele<a[mid]){
            start=mid+1;
         }
         else{
            end=mid-1;
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
      cout<<dbinarys(a,n,k)<<endl;
   }

return 0;   
}