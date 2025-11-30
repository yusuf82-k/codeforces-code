#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, l, r;
        cin >> n >> l >> r;
        int k = r - l + 1;

        vector<ll> a(n + 1), b(n + 1), c(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        b = a;
        c = a;

        sort(b.begin() + 1, b.begin() + r + 1);
        sort(c.begin() + l, c.end());

        ll sumb = 0, sumc = 0;
        for (int i = 1; i <= k; i++) {
            sumb += b[i];
            sumc += c[l + i - 1];
        }

        cout << min(sumb, sumc) << endl;
    }

    return 0;
}
