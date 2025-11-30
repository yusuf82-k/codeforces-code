#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll one = LLONG_MAX, two = LLONG_MAX, th = LLONG_MAX;
    bool x = false, y = false, z = false;

    for (ll i = 0; i < n; i++) {
        ll v;
        string s;
        cin >> v >> s;
        if (s == "01") {
            one = min(one, v);
            x = true;
        } else if (s == "10") {
            two = min(two, v);
            y = true;
        } else if (s == "11") {
            th = min(th, v);
            z = true;
        }
    }

    if (!x && !y && !z) {
        cout << -1 << endl;
        return;
    }

    if (!z) {
        if (x && y) cout << one + two << endl;
        else cout << -1 << endl;
        return;
    }

    ll ans = th;
    if (x && y) ans = min(ans, one + two);
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
