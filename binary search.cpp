#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    while (q--) {
        int m;
        cin >> m;

        // Binary search for last element <= m
        int low = 0, high = n - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (prices[mid] <= m) {
                ans = mid;      // mid is a candidate
                low = mid + 1;  // try to find a bigger one still <= m
            } else {
                high = mid - 1; // go left
            }
        }

        int count = ans + 1; // index + 1 = number of elements
        cout << count << "\n";
    }

    return 0;
}
