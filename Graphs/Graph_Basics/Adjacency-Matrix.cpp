/*Adjacency Matrix of Undirected Graph
Input-
5 7
1 2
0 1
0 4
1 4
1 3
4 3
3 2
Output-
0 1 0 0 1 
1 0 1 1 1 
0 1 0 1 0 
0 1 1 0 1 
1 1 0 1 0 
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
   ll adj_mat[n][n];
   memset(adj_mat,0,sizeof(adj_mat));

   for(ll i=0;i<m;i++){
       ll u,v;
       cin>>u>>v;
       adj_mat[u][v]=1;
       adj_mat[v][u]=1; //To make Adjacency Matrix for a Directed graph just remove this line 
   } 

   for(ll i=0;i<n;i++){
       for(ll j=0;j<n;j++){
           cout<<adj_mat[i][j]<<" ";
       }
       cout<<endl;
   }
return 0;   
}