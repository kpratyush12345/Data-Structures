/*Adjacency List of Undirected Graph
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
0-> 1-> 4
1-> 2-> 0-> 4-> 3
2-> 1-> 3
3-> 1-> 4-> 2
4-> 0-> 1-> 3
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
   ll u,v;
   for(ll i=0;i<m;i++){
       cin>>u>>v;
       adj_lst[u].push_back(v);
       adj_lst[v].push_back(u); //To make Adjacency List for a Directed graph just remove this line 
   } 
   //Print Adj list
   for(ll i=0;i<n;i++){ 
        cout<<i; 
        for (auto x : adj_lst[i]) 
           cout << "-> " << x; 
        cout<<endl;
   }
return 0;   
}