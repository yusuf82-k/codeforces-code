#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int f(int64 l) {
    if (l <= 1) return 0;
    // count how many times we need to replace l by ceil(l/2) until l == 1
    // that's ceil(log2(l))
    int cnt = 0;
    while (l > 1) {
        // ceil(l/2) = (l + 1) / 2
        l = (l + 1) / 2;
        ++cnt;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int64 n, m, a, b;
        cin >> n >> m >> a >> b;
        // four possible remaining grid sizes after the initial cut that keeps Fouad:
        // keep rows [1..a] => n' = a
        // keep rows [a..n] => n' = n-a+1
        // keep cols [1..b] => m' = b
        // keep cols [b..m] => m' = m-b+1
        int64 n1 = a;
        int64 n2 = n - a + 1;
        int64 m1 = b;
        int64 m2 = m - b + 1;

        // Consider the four configurations (n', m) and (n, m')
        // and pick minimum f(n') + f(m') then add 1 for the initial cut.
        int best = INT_MAX;
        best = min(best, f(n1) + f(m));
        best = min(best, f(n2) + f(m));
        best = min(best, f(n)  + f(m1));
        best = min(best, f(n)  + f(m2));

        cout << (1 + best) << "\n";
    }
    return 0;
}
