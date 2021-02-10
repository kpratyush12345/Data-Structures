/*Detect Cycle in Directed Graph
Input - 
2
4 6
0 1
0 2
1 2
2 0
2 3
3 3
4 3
0 1
0 2
1 2
2 3

Output - 
1
0

*/
#include<bits/stdc++.h>
using namespace std;

#define tst               long t;cin>>t;while(t--)
#define fo(i,a,n)         for(int i=a;i<n;i++)
#define M                 1000000007
#define ci                cin>>
#define co                cout<<
#define nw                cout<<"\n"
#define fl                float
#define double            db
#define unsigned          long long ull
#define itr               for(auto it= v.begin();it !=v.end();it++)
#define PI                3.1415926535897932384626
#define pl                pair<ll,ll>
#define mp                make_pair
#define sort              sort(a,a+n) 
#define sortv             sort(v.begin(),v.end()
#define ll                long long
#define pb                push_back
#define vi                vector<int>
#define vl                vector<long long>
#define vll               vector<pair<long long,long long>>
#define vii               vector<pair<int,int>>
#define vvi               vector<vector<int>>
#define maxq(x)           priority_queue<x>
#define minq(x)           priority_queue<x,vector<x>,greater<x>>
#define graph             map<int,vi>
#define vvl               vector<vector<long long>>
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define f                 first
#define s                 second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
bool isCyclic_util(vector<int> adj[], vector<bool> visited, int curr){
    if(visited[curr]==true)
        return true;
    
    visited[curr] = true;
    bool flag = false;
    for(int i=0;i<adj[curr].size();++i){
        flag = isCyclic_util(adj, visited, adj[curr][i]);
        if(flag==true)
            return true;
    }
    return false;
} 

bool isCyclic(int V, vector<int> adj[]){
   vector<bool> visited(V,false);
   bool flag = false;
   for(int i=0;i<V;++i){
           visited[i] = true;
           for(int j=0;j<adj[i].size();++j){
               flag = isCyclic_util(adj,visited,adj[i][j]);
               if(flag==true)
                   return true;
           }
           visited[i] = false;
   }
   return false;
}

int main(){
   OJ;
   int t;
   cin >> t;
	
	while(t--){
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	} 
return 0;   
}
