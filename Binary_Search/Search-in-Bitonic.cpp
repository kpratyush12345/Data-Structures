/*Search in Bitonic Array
Input-
2
6
1 3 8 12 4 2
8
1 2 3 4 5 7 3 2
Output-
3
5
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

int asbs(int a[],int start,int end,int ele){
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            return mid;
         }
         else if(ele<a[mid]){
            end=mid-1;
         }
         else{
            start=mid+1;
         }
      }
      return -1;
   }

int decbs(int a[],int start,int end,int ele){
      while(start<=end){
         int mid = start + (end-start)/2;
         if(ele==a[mid]){
            return mid;
         }
         else if(ele<a[mid]){
            start=mid+1;
         }
         else{
            end=mid-1;
         }
      }
      return -1;
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
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        int ind = peak_ele(a,n);
        int as =  asbs(a,0,ind-1,a[ind]);
        int de = decbs(a,ind,n-1,a[ind]);  
        if(de>0){
            cout<<de<<endl;
        }
        else if(as>0){
            cout<<as<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
return 0;   
}