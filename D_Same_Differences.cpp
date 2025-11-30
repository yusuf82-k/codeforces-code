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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        unordered_map<long long, long long> freq;
        for (int i = 0; i < n; i++) freq[a[i] - (i + 1)]++;
        long long ans = 0;
        for (auto &p : freq)
            ans += p.second * (p.second - 1) / 2;
        cout << ans << "\n";
    }
}
