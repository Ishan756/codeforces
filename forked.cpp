#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;

        long long xk, yk, xq, yq;
        cin >> xk >> yk;
        cin >> xq >> yq;

        vector<pair<long long,long long>> moves = {
            {a,b},{a,-b},{-a,b},{-a,-b},
            {b,a},{b,-a},{-b,a},{-b,-a}
        };

        set<pair<long long,long long>> kingPos;
        set<pair<long long,long long>> queenPos;

        for(auto [dx,dy] : moves){
            kingPos.insert({xk + dx, yk + dy});
            queenPos.insert({xq + dx, yq + dy});
        }

        int ans = 0;
        for(auto p : kingPos){
            if(queenPos.count(p)) ans++;
        }

        cout << ans << endl;
    }
}