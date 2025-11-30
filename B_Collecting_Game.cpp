#include <bits/stdc++.h>
using namespace std;

pair<int, int> a[100005];
int ans[100005];
long long pref[100005];

void solve() {
    int n;
    cin >> n;

    // Read input values and store original indices
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    // Sort by value (ascending)
    sort(a + 1, a + n + 1);

    // Compute prefix sums
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + a[i].first;
    }

    int next_index = n;

    // Process from largest to smallest
    for (int i = n; i >= 1; i--) {
        ans[a[i].second] = next_index - 1;

        // If this element cannot be reached by sum of smaller ones
        if (a[i].first > pref[i - 1]) {
            next_index = i - 1;
        }
    }

    // Print answers in original order
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
