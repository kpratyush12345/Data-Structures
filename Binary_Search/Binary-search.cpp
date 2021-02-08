/*Binary Search
Input-
2
10 4
1 2 3 4 5 6 7 8 9 10
5 6
1 2 3 4 5
Output-
3
-1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int abinarys(vector<int> v,int ele){
      int start = 0;
      int end = v.size()-1;
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==v[mid]){
            return mid;
         }
         else if(ele<v[mid]){
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
      vector<int> v;
      for(int i=0;i<n;i++){
         cin>>a[i];
         v.push_back(a[i]);
      }
      cout<<abinarys(v,k)<<endl;
   }

return 0;   
}