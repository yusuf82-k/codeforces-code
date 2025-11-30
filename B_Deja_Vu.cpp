#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        vector<int> x(q);
        for (auto &v : a) cin >> v;
        for (auto &v : x) cin >> v;

        int mn = 31;
        for (int i = 0; i < q; i++) {
            if (x[i] < mn) {
                mn = x[i];
                ll add = 1LL << (x[i] - 1);
                ll div = 1LL << x[i];
                for (auto &val : a) {
                    if (val % div == 0) val += add;
                }
            }
        }

        for (auto val : a) cout << val << " ";
        cout << endl;
    }
    return 0;
}
