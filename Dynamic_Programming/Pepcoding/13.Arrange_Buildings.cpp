//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/arrange-buildings-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution{   
public:
    ll countbs(int n){
        // code here 
        ll buildings = 1, spaces = 1;
        for(ll i = 2;i<=n;i++){
            ll newBuilding = spaces;
            ll newSpace = buildings + spaces;

            spaces = newSpace;
            buildings = newBuilding;
        }
        ll total = spaces + buildings;
        return total * total; //No. of combinations
    }
};

int main(){
    //Write the code from here
    ll n;
    cin>>n;
    Solution obj;
    ll ans = obj.countbs(n);
    cout<<ans<<endl;
    return 0;
}