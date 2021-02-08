/*Sub Sequence in String
Input-
abc
Output-
{ }
a
b
ab
c
ac
bc
abc
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
 
   char s[200];
    cin >> s;
    int n = strlen(s);
    // 2^n - 1 subsequences
    int noOfSubsequences = (1 << n) - 1;
    cout << "{ }\n";
    for (int i = 1; i <= noOfSubsequences; i++)
    {
        int temp = i, j = 0;
        while (temp > 0)
        {
            if (temp & 1)
                cout << s[j];
            j++;
            temp = temp >> 1;
        }
        cout << '\n';
    } 
return 0;   
}