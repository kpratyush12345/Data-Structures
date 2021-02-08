/*Maximizing XOR - Hackerrank
Input-
2
10 15
11 100
Output-
7
127
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
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
 
    int x, y;   cin >> x >> y;
    int maxXor = 0;
    for (int i = x; i <= y; i++)
    {
        for (int j = i; j <= y; j++)
        {
            int currentXor = (i ^ j);
            if (currentXor > maxXor)
                maxXor = currentXor;
        }
    }
    cout << maxXor << '\n'; 
   }
return 0;   
}
