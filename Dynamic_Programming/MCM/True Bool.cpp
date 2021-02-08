/* Sequence Pattern Matching
input:
T|T&F^T
output:
Aukat se Bahar 
*/
#include <bits/stdc++.h>
using namespace std;

unordered_map <string,int> mp;

int solve(string s,int i,int j,bool isTrue){
	if(i>j){
		return 0;
	}    
	if(i==j){
		if(isTrue==1){
			return s[i]='T';
		}
		else{
			return s[i]='F';
		}
	}
	string temp=to_string(i)+" "+to_string(j)+" "+to_string(isTrue);
	if(mp.find(temp)!=mp.end()){
		return mp[temp];
	}
	int ans=0;

for(int k=i+1;k<=j-1;k+=2){
    
    int lt=solve(s,i,k-1,true);
    int lf=solve(s,i,k-1,false);
    int rt=solve(s,k+1,j,true);
    int rf=solve(s,k+1,j,false);
    
    if(s[k]=='&'){
        if(isTrue==1)
            ans=ans + lt*rt;
        else
            ans=ans + lf*rt + lt*rf + lf*rf;
    }
    
    if(s[k]=='|'){
        if(isTrue==1)
            ans= ans + lt*rt + lt*rf + lf*rt;
        else
            ans=ans+ lf*rf;
    }
    
    if(s[k]=='^'){
        if(isTrue==1)
            ans=ans+ lf*rt + lt*rf;
        else
            ans=ans+ lt*rt + lf*rf;
    }
}

//ans=ans%1003;
return mp[temp]=ans;
}

int main() {
    	mp.clear(); 
    	string s;
    	cin>>s;
    	cout<<solve(s,0,s.length()-1,1)<<endl;   	
    
return 0;
}