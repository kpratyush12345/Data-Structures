/*Top k Frequent Element
Input-
1
7 2
1 1 1 3 2 2 4
Output-
2 1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> pi; 
 
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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        priority_queue<pi,vector<pi>,greater<pi>> minh;
        for(auto i=mp.begin();i!=mp.end();i++){
            minh.push({i->second,i->first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        while(minh.size()>0){
           cout<<minh.top().second<<" ";
           minh.pop();
        }
        cout<<endl;
    }
return 0;   
}