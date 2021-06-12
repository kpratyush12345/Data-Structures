#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int lastOcc(int a[],int n,int key){
    if(n==0) return -1;

    int i = lastOcc(a+1,n-1,key);
    if(i==-1){
        if(a[0]==key) return 0;
        else return -1;
    }
    return i + 1;
}

int firstOcc(int a[],int n,int key){
    if(n==0) return -1;

    if(a[0] == key) return 0;

    int i = firstOcc(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}

int linearSearch(int a[],int i,int n,int key){
    if(i==n) return -1;

    if(a[i]==key) return 1;

    return linearSearch(a,i+1,n,key);
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