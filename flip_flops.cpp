#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long c, k;
        cin >> n >> c >> k;
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        sort(a.begin(), a.end());
 
        long long ans = c;
 
        for (int start = 0; start <= n; start++) {
            long long curC = c, curK = k;
            bool ok = true;
 
            for (int i = 0; i < start; i++) {
                if (a[i] > curC) {
                    ok = false;
                    break;
                }
                curC += a[i];
            }
 
            if (!ok) continue;
 
            for (int i = start; i < n; i++) {
                if (a[i] > curC) break;
 
                long long use = min(curK, curC - a[i]);
                curK -= use;
                curC += a[i] + use;
            }
 
            ans = max(ans, curC);
        }
 
        cout << ans <<endl;
    }
}