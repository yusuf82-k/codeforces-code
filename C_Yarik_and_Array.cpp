#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b;

        cin >> a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == a[i - 1] % 2) {
                b.push_back(i - 1);
            }
        }
        b.push_back(n - 1);

        if (b.empty()) b.push_back(n - 1); // prevent crash

        ll maxi = LLONG_MIN;

        int start = 0;
        for (int j = 0; j < (int)b.size(); j++) {
            ll currentSum = 0, maxSum = LLONG_MIN;
            for (int i = start; i <= b[j]; i++) {
                currentSum += a[i];
                maxSum = max(maxSum, currentSum);
                if (currentSum < 0) currentSum = 0;
            }
            maxi = max(maxi, maxSum);
            start = b[j] + 1;
        }

        cout << maxi << endl;
    }
    return 0;
}
