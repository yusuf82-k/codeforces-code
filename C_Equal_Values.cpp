#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ans = 1e18;  // equivalent to 10**18
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && a[j] == a[i]) {
                j++;
            }
            // (i + n - j) * a[i]
            ans = min(ans, (ll)(i + (n - j)) * a[i]);
            i = j;
        }
        cout << ans << "\n";
    }
    return 0;
}
