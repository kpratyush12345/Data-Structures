/*Topological Sort
Input-
1
6 6
5 0 
4 0
5 2
4 1
2 3
3 1
Output-
5 4 2 3 1 0 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void dfs(ll node,bool *vis,vector<ll> adj_lst[],stack<ll>&st){
    vis[node]=true;
    for(auto it: adj_lst[node]){
        if(!vis[it]){
            dfs(it,vis,adj_lst,st);
        }
    }
    st.push(node);
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
   } 
   bool vis[n+1]={false};
   stack<ll> st;
   for(ll i=0;i<m;i++){
       if(!vis[i]){
           dfs(i,vis,adj_lst,st);
       }
   }
   while(!st.empty()){
       cout<<st.top()<<" ";
       st.pop();
   }
   cout<<endl;
   }  
return 0;   
}