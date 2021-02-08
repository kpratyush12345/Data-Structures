/*Frequency Sort
Input-
1
7 
1 1 1 3 2 2 4
Output-
1 1 1 2 2 4 3 
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        priority_queue<pi> maxh;
        for(auto i=mp.begin();i!=mp.end();i++){
            maxh.push({i->second,i->first});
        }
        while(maxh.size()>0){
            int freq = maxh.top().first;
            int ele = maxh.top().second;
            for(int i=1;i<=freq;i++){
                cout<<ele<<" ";
            }
           maxh.pop();
        }
        cout<<endl;
    }
return 0;   
}