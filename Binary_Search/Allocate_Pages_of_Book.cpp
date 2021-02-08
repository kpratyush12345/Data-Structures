/*Allocate Pages of Book
Input-
2
4 2
10 20 30 40
5 6
2 4 5 7 8
Output-
60
-1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isValid(int a[],int n,int k,int mx){
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>mx){
            student++;
            sum=a[i];
        }
        if(student>k){
            return false;
        }
    }
    return true;
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
       int n,k;
       cin>>n>>k;
       int a[n];
       int sum=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
           sum+=a[i];
       }
       if(n<k){
           cout<<"-1"<<endl;
           continue;
       }
       int start=*max_element(a, a + n);
       int end=sum;
       int res=-1;
       while(start<=end){
           int mid=start+(end-start)/2;
           if(isValid(a,n,k,mid)==true){
               res=mid;
               end=mid-1;
           }
           else{
               start=mid+1;
           }
       }
       cout<<res<<endl;
   } 
return 0;   
}
