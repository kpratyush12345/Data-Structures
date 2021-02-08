/*No. of Times sorted array was rotated
Input-
2
8
11 12 15 18 2 5 6 8
6
12 14 16 1 3 5
Output-
4
3
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
      cout<<mineleind(a,n)<<endl;
   }

    
return 0;   
}