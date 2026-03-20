#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,k;cin>>n>>k;
	    string s;
	    cin>>s;
	    unordered_map<char , int>mp;
	    for(auto it : s){
	        mp[it]++;
	    }
	    int odd=0;
	    for(int i=0 ; i<26 ; i++){
	        char ch='a'+i;
	        if(mp[ch]%2==1){
	            odd++;
	        }
	    }
	    odd--;
	    if(odd<=k){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}

}
    