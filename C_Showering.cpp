#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, s, m;
        cin >> n >> s >> m;

        vector<pair<long long, long long>> intervals(n);
        for (int i = 0; i < n; ++i) {
            cin >> intervals[i].first >> intervals[i].second;
        }

        bool possibility = false;

  
        if (intervals[0].first >= s) {
            possibility= true;
        }

        
        for (int i = 1; i < n; ++i) {
            long long gap = intervals[i].first - intervals[i - 1].second;
            if (gap >= s) {
                possibility = true;
            }
        }

        
        if (m - intervals[n - 1].second >= s) {
            possibility = true;
        }

        cout << (possibility ? "YES" : "NO") << endl;
    }

    return 0;
}
