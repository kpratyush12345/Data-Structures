/*Detect Cycle in Directed Graph
Input-
///////1////////
7 8
0 1 
1 2
3 0
6 0
6 3
3 4
4 5
5 6
//////2////////
6 5
0 1
1 2 
3 2
4 1
5 4
Output-
YES
NO
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> adj_lst[101];

bool dfs(ll node,bool vis[],bool rec[]){
    if(vis[node]==false){
        vis[node]=true;
        rec[node]=true;

        for(auto it: adj_lst[node]){
        if(!vis[it] && dfs(it,vis,rec)){
            return true;
        }
        else if(rec[it]==true){
            return true;
        }
    }
    rec[node]=false;
    return false;
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
   ll u,v;
   for(ll i=0;i<m;i++){
       cin>>u>>v;
       adj_lst[u].push_back(v);
   } 
   bool vis[n+1]={false};
   bool rec[n+1]={false};
   ll flag=0;
   for(ll i=0;i<m;i++){
       if(!vis[i]){
           if(dfs(i,vis,rec)){
           flag=1;break;
           }
       }
   } 
   if(flag){
       cout<<"YES"<<endl;
   } else {
       cout<<"NO"<<endl;
   }

return 0;   
}