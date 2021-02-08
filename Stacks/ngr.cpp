/* NEXT GREATEST ELEMENT IN AN ARRAY TO RIGHT
INPUT:
2
10 
1 2 3 10 5 6 4 8 9 10
5 
1 2 3 4 5
OUTPUT:
2 3 10 -1 6 8 8 9 10 -1 
2 3 4 5 -1 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
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
      vector<int> v;
      stack<int> s;
        for (int i = n-1; i >= 0; i--){
            if(s.size()==0)
               v.push_back(-1);
            else if(s.size()>0&& s.top()>a[i])
               v.push_back(s.top());
            else if(s.size()>0 && s.top()<=a[i]){
                while(s.size()>0 && s.top()<=a[i]){
                s.pop();
                }
                if(s.size()==0)
                  v.push_back(-1);
                else 
                  v.push_back(s.top());
            }
            s.push(a[i]);
        }
       reverse(v.begin(),v.end());
       for(ll i=0;i<v.size();i++){ 
       cout<<v[i]<<" ";
       }
       cout<<endl;
   } 
return 0;   
}