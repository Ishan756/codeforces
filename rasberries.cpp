#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n,k;
        cin >> n >> k;

        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        int ans = INT_MAX;

        if(k == 4){

            int even = 0;

            for(int x : a){
                if(x % 2 == 0) even++;
            }

            if(even >= 2) ans = 0;
            else if(even == 1) ans = 1;
            else ans = 2;

            for(int x : a){
                ans = min(ans, (4 - x%4) % 4);
            }
        }

        else{

            for(int x : a){
                ans = min(ans, (k - x%k) % k);
            }
        }

        cout << ans << endl;
    }
}