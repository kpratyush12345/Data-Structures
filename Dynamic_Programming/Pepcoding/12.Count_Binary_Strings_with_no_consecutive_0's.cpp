//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-binary-strings-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution{   
public:
    int countbs(int n){
        // code here 
        int zeros = 1, ones = 1;
        for(int i = 2;i<=n;i++){
            int newzeros = ones;
            int newones = zeros + ones;

            ones = newones;
            zeros = newzeros;
        }
        return ones + zeros;
    }
};

int main(){
    //Write the code from here
    int n;
    cin>>n;
    Solution obj;
    int ans = obj.countbs(n);
    cout<<ans<<endl;
    return 0;
}