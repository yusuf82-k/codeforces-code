#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 2000000000; // same as 2 * 10^9
        for (int i = 0; i < n; i++) {
            int d, s;
            cin >> d >> s;
            ans = min(ans, d + (s - 1) / 2);
        }
        cout << ans << "\n";
    }
    return 0;
}
