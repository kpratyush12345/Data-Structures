/*DFS
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
2 0 1 3 5 4 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void dfs(ll node,bool *vis,vector<ll> adj_lst[]){
    vis[node]=true;
    cout<<node<<" ";

    for(auto it: adj_lst[node]){
        if(!vis[it]){
            dfs(it,vis,adj_lst);
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
   dfs(2,vis,adj_lst); 
   cout<<endl;  
return 0;   
}