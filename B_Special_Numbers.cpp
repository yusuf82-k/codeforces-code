#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1000000007;  

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll res = 0;
        ll power = 1;  

        while (k > 0) {
            if (k & 1) {
                res = (res + power) % MOD;
            }
            power = (power * n) % MOD;  
            k >>= 1;
        }

        cout << res << "\n";
    }

    return 0;
}
