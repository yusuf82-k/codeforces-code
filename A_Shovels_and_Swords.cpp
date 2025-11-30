#include <bits/stdc++.h>
using namespace std;

bool can(long long k, long long a, long long b) {
    return (a >= k && b >= k && (a + b) >= 3 * k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long low = 0, high = min(a, b), ans = 0;
        while (low <= high) {
            long long mid = (low + high) / 2;
            if (can(mid, a, b)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << ans << '\n';
    }
}
