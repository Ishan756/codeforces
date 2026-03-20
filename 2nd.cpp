#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, k, g;
        cin >> n >> k >> g;

        long long A = (g - 1) / 2;               
        long long maxSavedGold = min(k, (n * A) / g);
        long long ans = maxSavedGold * g;    
        cout << ans << endl;
    }

    return 0;
}