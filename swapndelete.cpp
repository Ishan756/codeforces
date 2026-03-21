#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;cin>>t;
while(t--){
   
    string s;cin>>s;
    int n = s.length();
    priority_queue<int,vector<int>,greater<int>>one,zero;
 int ans=0;
  unordered_map<int,bool>map;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            zero.push(i);
        }
        else{
            one.push(i);
        }
    }
    bool check=false;
   for(int i=0;i<n && !check;i++){
       if(!map[i]){
           if(s[i]=='0'){
               if(!one.empty()){
                   map[one.top()]=true;
                   one.pop();
               }
               else{
                   cout<<n-i<<endl;
                   check=true;
               }
                map[zero.top()]=true;
                   zero.pop();
           }
           else{
               if(!zero.empty()){
                   map[zero.top()]=true;
                   zero.pop();
               }
               else{
                    cout<<n-i<<endl;
                   check=true;
               }
               map[one.top()]=true;
               one.pop();
           }
       }
   }
   if(!check){
       cout<<0<<endl;
   }
}
}