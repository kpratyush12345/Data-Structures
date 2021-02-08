/* Maximum Area Of Histogram
INPUT:
1
7
6 2 5 4 5 1 6
OUTPUT:
12
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int mah(int a[],int n){
    vector<int> left;
      stack<pair<int,int>> sl;
      int pindex=-1;
        for (int i = 0; i < n; i++){
            if(sl.size()==0)
               left.push_back(pindex);
            else if(sl.size()>0&& sl.top().first<a[i])
               left.push_back(sl.top().second);
            else if(sl.size()>0 && sl.top().first>=a[i]){
                while(sl.size()>0 && sl.top().first>=a[i]){
                sl.pop();
                }
                if(sl.size()==0)
                  left.push_back(pindex);
                else 
                  left.push_back(sl.top().second);
            }
            sl.push({a[i],i});
        }

      vector<int> right;
      stack<pair<int,int>> sr;
      pindex=n;
        for (int i = n-1; i >= 0; i--){
            if(sr.size()==0)
               right.push_back(pindex);
            else if(sr.size()>0&& sr.top().first<a[i])
               right.push_back(sr.top().second);
            else if(sr.size()>0 && sr.top().first>=a[i]){
                while(sr.size()>0 && sr.top().first>=a[i]){
                sr.pop();
                }
                if(sr.size()==0)
                  right.push_back(pindex);
                else 
                  right.push_back(sr.top().second);
            }
            sr.push({a[i],i});
        }
        reverse(right.begin(),right.end());
    int width[n];
    for(int i=0;i<n;i++){
        width[i]= right[i]-left[i]-1;
    }
    int area[n];
    for(int i=0;i<n;i++){
        area[i]=a[i]*width[i];
    }
    int mx = *max_element(area, area + n);
    return mx;
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
      cout<<mah(a,n)<<endl;
   } 
return 0;   
}