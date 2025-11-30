#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

// fast modular exponentiation
ll modpow(ll base, ll exp, ll mod) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum = (sum + a[i]) % MOD;  //keep sum modulo
        }
        //   kadane' algorithm
        ll max_sum = 0, curr_sum = 0;
        for (int i = 0; i < n; i++) {
            curr_sum += a[i];
            max_sum = max(max_sum, curr_sum);
            if (curr_sum < 0) curr_sum = 0;
        }

        // compute pow(2,k) % MOD
        ll p = modpow(2, k, MOD);

        // ans = sum + (p * max_sum) - max_sum
        ll ans = ( (sum + ((p - 1 + MOD) % MOD) * (max_sum % MOD)) % MOD + MOD ) % MOD;

        cout << ans << "\n";
    }
    return 0;
}
