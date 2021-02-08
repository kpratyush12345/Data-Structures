/*Sort a K sorted array
Input-
1
7 3
6 5 3 2 8 10 9
Output-
2 3 5 6 8 9 10 
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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> v;
        priority_queue<int,vector<int>,greater<int>> minh;
        for(int i=0;i<n;i++){
            minh.push(a[i]);
            if(minh.size()>k){
                v.push_back(minh.top());
                minh.pop();
            }
        }
        while(minh.size()>0){
           v.push_back(minh.top());
           minh.pop();
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
return 0;   
}