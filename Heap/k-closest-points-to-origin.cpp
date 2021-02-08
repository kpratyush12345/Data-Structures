/*K Closest Points to Origin
Input-
1
4 2 
1 3
-2 2
5 8
0 1
Output-
-2 2
0 1
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
        int n,k;
        cin>>n>>k;
        int a[n][2];
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1];
        }
        priority_queue<pair<int,pair<int,int>>> maxh;
        for(int i=0;i<n;i++){
            maxh.push({a[i][0]*a[i][0]+a[i][1]*a[i][1],{a[i][0],a[i][1]}});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        while(maxh.size()>0){
            pair<int,int> p = maxh.top().second;
            cout<<p.first<<" "<<p.second<<endl;
           maxh.pop();
        }
        cout<<endl;
    }
return 0;   
}