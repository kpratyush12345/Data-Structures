#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void bubble_sort(int a[],int n){
    if(n==1) return;

    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubble_sort(a,n-1);
}

void bubble_sort_rec(int a[],int j,int n){
    if(n==1) return;
    if(j==n-1) return bubble_sort_rec(a,0,n-1);

    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubble_sort_rec(a,j+1,n);
    return;
}
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

   int a[] = {5,4,3,1,2};
   int n = 5;
   bubble_sort_rec(a,n);
   for(int i=0;i<n;i++) cout<<a[i]<<" ";
   return 0;
}