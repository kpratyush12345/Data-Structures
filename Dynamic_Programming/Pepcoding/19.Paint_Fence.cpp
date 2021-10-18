//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-fence-official/ojquestion
//https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution{
    public:
    long long countWays(int n, int k){
        // code here
        if(n == 1) return k;

        long long same = k * 1;
        long long diff = k * (k - 1);
        long long total = same + diff;
        
        for(int i = 3;i<=n ;i++){
            same = diff * 1;
            diff = total * (k - 1);
            total = same + diff;
        }
        return total;
    }
};

int main(){
    //Write the code from here
    int n, k;
    cin>>n>>k;
    Solution obj;
    int ans = obj.countWays(n,k);
    cout<<ans<<endl;
    
    return 0;
}