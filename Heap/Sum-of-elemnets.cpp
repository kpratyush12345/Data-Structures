/*Sum of Elements
Input-
1
6 3 6
1 3 12 5 15 11
Output-
23
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int ksmall(int a[],int n,int k){
    priority_queue<int> maxh;
        for(int i=0;i<n;i++){
            maxh.push(a[i]);
            if(maxh.size()>k){
                maxh.pop();
            }
        }
    return maxh.top();
}
 
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
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        int first = ksmall(a,n,k1);
        int second = ksmall(a,n,k2);
        for(int i=0;i<n;i++){
            if(a[i]>first && a[i]<second){
                sum+=a[i];
            }
        }
        cout<<sum<<endl;
    }
return 0;   
}