/*Detect Cycle in an Undirected Graph
Input-
2
6 8
0 1
0 2
1 3
2 4
3 5
4 5
3 4
1 4
4 3
1 2
2 3
3 4
Output-
1
0
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool dfs(ll node,ll parent,bool *vis,vector<ll> adj_lst[]){
    vis[node]=true;
    for(auto it: adj_lst[node]){
        if(!vis[node]){
            if(dfs(it,node,vis,adj_lst))
               return true;
        }
        else if(it!=parent){
            return true;
        }
    }
    return false;
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 
   ll t;
   cin>>t;
   while(t--){
   ll n,m;
   cin>>n>>m;
   vector<ll> adj_lst[n];
   ll u,v;
   for(ll i=0;i<m;i++){
       cin>>u>>v;
       adj_lst[u].push_back(v);
       adj_lst[v].push_back(u);
   } 
   bool vis[n+1]={false};
   cout<<dfs(0,0,vis,adj_lst)<<endl; 
   }  
return 0;   
}