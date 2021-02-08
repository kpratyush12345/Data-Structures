/*Peak Element Index
Input-
4
4
5 10 20 15
7
10 20 15 2 23 90 67
5
10 20 30 40 50
5
50 40 30 20 10
Output-
2
1
4
0
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int peak_ele(int a[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid>0 && mid<n-1){
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
                return mid;
            else if(a[mid-1]>a[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        else if(mid==0){
            if(a[0]>a[1])
                return 0;
            else
                return 1;
        }
        else if(mid==n-1){
            if(a[n-1]>a[n-2])
                return n-1;
            else 
                return n-2;
        }
    }
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<peak_ele(a,n)<<endl;
    }
return 0;   
}