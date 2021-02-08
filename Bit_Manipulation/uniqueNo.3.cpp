/*Unique No. 3
Input-
7
1 1 1 2 2 2 3
Output-
Unique Number is: 3
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
 
   int n; 
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count[32] = {0};
    for (int i = 0; i < n; i++)
    {
        int number = arr[i];
        int j = 0;
        while (number > 0)
        {
            count[j] += (number & 1);
            j++;
            number = number >> 1;
        }
    }
    int ans = 0, position = 1;
    for (int i = 0; i < 32; i++)
    {
        count[i] %= 3;
        ans += count[i] * position;
        position = position << 1;
    }
    cout << "Unique Number is: " << ans << '\n'; 
return 0;   
}