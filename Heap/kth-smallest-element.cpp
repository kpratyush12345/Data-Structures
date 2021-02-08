/*Kth Smallest Element
Input-
1
6 3
7 10 4 3 20 15
Output-
7
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
        priority_queue<int> maxh;
        for(int i=0;i<n;i++){
            maxh.push(a[i]);
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        cout<<maxh.top()<<endl;
    }
return 0;   
}