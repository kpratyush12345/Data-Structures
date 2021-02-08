/*Unique no.
Input-
6
1 1 2 2 3 4
Output-
3 4
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
 
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
    int n;
    cin >> n;
    int *arr = new int[n];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        res ^= arr[i];
    }
    int tempRes = res, index = 0;
    // Check the first bit which is set(1)
    while (tempRes > 0)
    {
        if (tempRes & 1)
            break;
        index++;
        tempRes = tempRes >> 1;
    }
    int mask = (1 << index);
    vector<int> tempArr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & mask)
            tempArr.push_back(arr[i]);
    }
    int a = 0;
    for (vector<int>::iterator it = tempArr.begin(); it != tempArr.end(); it++)
        a ^= (*it);
    int b = res ^ a;
    if (a > b)
        cout << b << " " << a << '\n';
    else
        cout << a << " " << b << '\n';
    return 0;
}