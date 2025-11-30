#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n+1);
        for (int i = 1; i <= n; ++i) cin >> c[i];

        vector<int> last(k+1, 0);
        vector<int> L1(k+1, 0), L2(k+1, 0);

        for (int i = 1; i <= n; ++i) {
            int col = c[i];
            int gap = i - last[col] - 1;
            if (gap > L1[col]) {
                L2[col] = L1[col];
                L1[col] = gap;
            } else if (gap > L2[col]) {
                L2[col] = gap;
            }
            last[col] = i;
        }

        for (int col = 1; col <= k; ++col) {
            int gap = n - last[col];
            if (gap > L1[col]) {
                L2[col] = L1[col];
                L1[col] = gap;
            } else if (gap > L2[col]) {
                L2[col] = gap;
            }
        }

        int ans = INT_MAX;
        for (int col = 1; col <= k; ++col) {
            int best = max(L1[col] / 2, L2[col]);
            ans = min(ans, best);
        }

        cout << ans << '\n';
    }
    return 0;
}
