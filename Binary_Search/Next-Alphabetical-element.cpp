/*Next alphabetical Element
Input-
2
4 c
a c f h
4 a
a c f h
Output-
f
c
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

char ceil_val(char a[],int n,char ele){
      int start = 0;
      int end = n-1;
      char res;
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            start=mid+1;
         }
         else if(ele<a[mid]){
            res=a[mid];
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
      int n;
      char k;
      cin>>n>>k;
      char a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      cout<<ceil_val(a,n,k)<<endl;
   } 
return 0;   
}