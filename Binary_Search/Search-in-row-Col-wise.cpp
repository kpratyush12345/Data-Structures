/*Search in Row and Column Wise Sorted matrix
Input-
2
4 4 33
10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50
4 4 23
10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50
Output-
3 1
Element not found
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void matrix(vector<vector<int>> a,int n,int m,int key){
    int i=0;
    int j=m-1;
    int flag=0;
    while(i>=0 && i<n && j>=0 && j<m){
        if(a[i][j]==key){
            flag=1;
            break;
        }
        else if(a[i][j]>key){
            j--;
        }
        else if(a[i][j]<key){
            i++;
        }
    }
    if(flag==0){
        cout<<"Element not found"<<endl;
    }else{
        cout<<i<<" "<<j<<endl;
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
        int n,m,k;
        cin>>n>>m>>k;
        int a[n][m];
        vector<vector<int>> vec;
        for(int i=0;i<n;i++){
            vector<int>v1;
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                v1.push_back(a[i][j]);
            }
            vec.push_back(v1);
        }
        matrix(vec,n,m,k);
    }
return 0;   
}