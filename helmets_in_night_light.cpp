#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n,p;
        cin>>n>>p;

        vector<int>a(n);
        vector<int>b(n);

        long long ans=0;

        priority_queue<pair<int , int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        queue<pair<int , int>> q;

        for(int i=0 ; i<n ; i++) cin>>a[i];
        for(int i=0 ; i<n ; i++) cin>>b[i];

        for(int i=0 ; i<n ; i++){
            pq.push({b[i],a[i]});
        }

        ans += p;
        int informed = 1;

        while(informed < n && !pq.empty()){

            int cost = pq.top().first;
            int total = pq.top().second;
            pq.pop();

            if(cost <= p){
                while(total-- && informed < n){
                    ans += cost;
                    informed++;
                }
            }else{
                ans += 1LL*p * (n - informed);
                break;
            }
        }

        cout<<ans<<endl;
    }
}