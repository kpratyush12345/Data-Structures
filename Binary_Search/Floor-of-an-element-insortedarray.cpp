/*Floor of an element in a Sorted Array
Input-
1
9 5
1 2 3 4 8 10 10 12 29
Output-
4
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int floor_val(int a[],int n,int ele){
      int start = 0;
      int end = n-1;
      int res=-1;
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            res = a[mid];
         }
         else if(ele<a[mid]){
            end=mid-1;
         }
         else{
            res=a[mid];
            start=mid+1;
         }
      }
      return res;
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
      cout<<floor_val(a,n,k)<<endl;
   } 
return 0;   
}