#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool isSorted(int a[],int n){
    if(n==0 or n==1) return true;

    if(a[0]<a[1] and isSorted(a+1,n-1)){
        return true;
    }
    return false;
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    cout<<isSorted(arr,n)<<endl;

   return 0;
}