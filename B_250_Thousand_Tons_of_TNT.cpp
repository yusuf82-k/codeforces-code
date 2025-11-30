#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> factors(int n) {
    vector<int> a;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (i != n / i) a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n + 1), sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }

        ll ans = LLONG_MIN;
        vector<int> divs = factors(n);

        for (int d : divs) {
            ll maxi = LLONG_MIN;
            ll mini = LLONG_MAX;

            for (int j = d; j <= n; j += d) {
                ll seg_sum = sum[j] - sum[j - d];
                maxi = max(maxi, seg_sum);
                mini = min(mini, seg_sum);
            }

            ans = max(ans, maxi - mini);
        }

        cout << ans << "\n";
    }

    return 0;
}
