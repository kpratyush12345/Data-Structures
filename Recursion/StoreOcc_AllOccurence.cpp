#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int storeOcc(int a[],int i,int n,int key,int out[],int j){
    if(i==n) return j;

    if(a[i]==key){
        out[j] = i;
        //increment j to accomodate current occ
        return storeOcc(a,i+1,n,key,out,j+1);
    }
    return storeOcc(a,i+1,n,key,out,j);
}

void allOcc(int a[],int i,int n,int key){
    if(i==n) return;
    if(a[i]==key){
        cout<<i<<",";
    }
    allOcc(a,i+1,n,key);
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   
   int arr[] = {1,2,3,4,7,6,7,10};
   int key = 7;
   int n = sizeof(arr)/sizeof(int);

   cout<<firstOcc(arr,n,key)<<endl;
   cout<<linearSearch(arr,0,n,8)<<endl;
   cout<<lastOcc(arr,n,key)<<endl;
   return 0;
}