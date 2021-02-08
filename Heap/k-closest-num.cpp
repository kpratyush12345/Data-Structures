/*K Closest Number
Input-
1
5 3 7
5 6 7 8 9
Output-
8 6 7 
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
        int n,k,x;
        cin>>n>>k>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        priority_queue<pair<int,int>> maxh;
        for(int i=0;i<n;i++){
            maxh.push({abs(a[i]-x),a[i]});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        while(maxh.size()>0){
            cout<<maxh.top().second<<" ";
            maxh.pop();
        }
        cout<<endl;
    }
return 0;   
}