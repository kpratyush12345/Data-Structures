/*BFS
Input-
6 8
0 1
0 2
1 3
2 4
3 5
4 5
3 4
1 4
Output-
2 0 4 1 5 3 
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
 
   ll n,m;
   cin>>n>>m;
   vector<ll> adj_lst[n];
   for(ll i=0;i<m;i++){
       ll u,v;
       cin>>u>>v;
       adj_lst[u].push_back(v);
       adj_lst[v].push_back(u);
   } 
   bool vis[n+1] = {false};
   queue<ll>q;
   q.push(3);
   vis[3]=true;
   while(!q.empty()){
       ll node = q.front();
       q.pop();
       cout<<node<<" ";

       for(auto it: adj_lst[node]){
           if(!vis[it]){
               vis[it] = true;
               q.push(it);
           }
       }
   }
   cout<<endl;
return 0;   
}