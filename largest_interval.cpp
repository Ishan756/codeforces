#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long lcm = 1;
        int ans = 0;

        for (long long i = 1; i <= 50; i++) {
            lcm = lcm * i / __gcd(lcm, i);

            if (lcm > n) break;

            if (n % lcm == 0)
                ans = i;
            else
                break;
        }

        cout << ans <<endl;
    }
}