//https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/maximum-sum-non-adjacent-elements-official/ojquestion
//https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution {
public:
    int FindMaxSum(vector<int>& arr) {
        int n = arr.size();
        int inc = arr[0];
        int exc = 0;
        for(int i = 1;i<n;i++){
            int newinc = exc + arr[i];
            int newexc = max(inc, exc);
            
            inc = newinc;
            exc = newexc;
        }
        return max(inc, exc);
    }
};

int main(){
    //Write the code from here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    int ans = obj.FindMaxSum(arr);
    cout<<ans<<endl;
    return 0;
}