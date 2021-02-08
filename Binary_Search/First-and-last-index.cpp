/*First and Last Occurence of an Element sorted array
input-
3
7 10
2 4 10 10 10 18 20
5 6
30 25 22 7 5
3 2
1 2 3
Output-
First: 2
Last: 4
First: -1
Last: -1
First: 1
Last: 1
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
      cout<<"First: "<<fir(a,n,k)<<endl;
      cout<<"Last: "<<lst(a,n,k)<<endl;
   }
    
return 0;   
}