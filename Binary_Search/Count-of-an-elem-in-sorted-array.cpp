/*Count of an element in a sorted array
Input-
2
7 10
2 4 10 10 10 18 20
3 2
1 2 3
Output-
3
1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int fir(int a[],int n,int ele){
      int start = 0;
      int end = n-1;
      int res=-1;
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            res = mid;
            end=mid-1;
         }
         else if(ele<a[mid]){
            end=mid-1;
         }
         else{
            start=mid+1;
         }
      }
      return res;
   }

int lst(int a[],int n,int ele){
      int start = 0;
      int end = n-1;
      int res=-1;
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            res = mid;
            start=mid+1;
         }
         else if(ele<a[mid]){
            end=mid-1;
         }
         else{
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
      int focc=fir(a,n,k);
      int locc=lst(a,n,k);
      ll count=(locc-focc)+1;
      cout<<count<<endl;
   }
return 0;   
}