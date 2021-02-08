/*SubSet Sum Queries
Output-
0000000011
0000001111
0001111111
1111111111
3-> Subset sum exists
5-> Subset sum exists
7-> Subset sum exists
20-> Subset sum doesn't exist
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
 
   int arr[] = {1, 2, 3, 4};
    int q[] = {3, 5, 7, 20};

    bitset<10> b;
    b[0] = 1;
    for (int i = 0; i < 4; i++) {
        b |= (b << arr[i]);
        cout << b << '\n';
    }
    for (int i = 0; i < 4; i++) {
        cout << q[i] << "-> ";
        if (b[q[i]])
            cout << "Subset sum exists\n";
        else
            cout << "Subset sum doesn't exist\n";
    } 
return 0;   
}