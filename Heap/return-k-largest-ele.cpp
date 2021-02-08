/*Return k Largest Element
Input-
1
6 3
7 10 4 3 20 15
Output-
10 15 20 
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
        priority_queue<int,vector<int>,greater<int>> minh;
        for(int i=0;i<n;i++){
            minh.push(a[i]);
            if(minh.size()>k){
                minh.pop();
            }
        }
        while(minh.size()>0){
           cout<<minh.top()<<" ";
           minh.pop();
        }
        cout<<endl;
    }
return 0;   
}