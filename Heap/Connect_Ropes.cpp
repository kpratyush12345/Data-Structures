/*Connect Ropes
Input-
1
5
1 2 3 4 5
Output-
33
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
        priority_queue<int, vector<int>, greater<int> > minh;
        for(int i=0;i<n;i++){
            minh.push(a[i]);
        }
        int cost =0;
        while(minh.size()>=2){
            int first = minh.top();
            minh.pop();
            int second = minh.top();
            minh.pop();
            cost+=first+second;
            minh.push(first+second);
        }
        cout<<cost<<endl;
    }
return 0;   
}
