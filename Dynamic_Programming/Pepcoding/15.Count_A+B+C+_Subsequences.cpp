//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-a+b+c+subsequences-official/ojquestion
//https://practice.geeksforgeeks.org/problems/count-subsequences-of-type-ai-bj-ck4425/1

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
class Solution{   
public:
    ll countSub(string s){
        // code here 
        int a = 0, ab = 0, abc = 0;
        for(int i = 0;i<s.length();i++){
            char ch = s[i];
            if(ch == 'a'){
                a = 2 * a + 1;
            } else if(ch == 'b'){
                ab = 2 * ab + a;
            } else if(ch == 'c'){
                abc = 2 * abc + ab;
            }
        }
        return abc;
    }
};

int main(){
    //Write the code from here
    string s;
    cin>>s;
    Solution obj;
    ll ans = obj.countSub(s);
    cout<<ans<<endl;
    return 0;
}