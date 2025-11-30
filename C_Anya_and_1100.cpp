#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check_1100(const string& s, ll i) {
    if (i < 0 || i + 3 >= (ll)s.size()) return false;
    return s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0';
}

void solve() {
    string s;
    cin >> s;
    ll n = s.size();

    ll count = 0;
    for (ll i = 0; i < n; i++)
        if (check_1100(s, i)) count++;

    ll q;
    cin >> q;
    while (q--) {
        ll i, v;
        cin >> i >> v;
        i--;  // convert to 0-based index

        if (s[i] != char('0' + v)) {
            bool before = check_1100(s, i - 3) || check_1100(s, i - 2) ||
                          check_1100(s, i - 1) || check_1100(s, i);
            s[i] = char('0' + v);
            bool after = check_1100(s, i - 3) || check_1100(s, i - 2) ||
                         check_1100(s, i - 1) || check_1100(s, i);
            count += after - before;
        }

        cout << (count ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) solve();
}
