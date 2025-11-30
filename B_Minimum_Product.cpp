                  
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        // Option 1: reduce a first, then b
        ll useA = min(n, a - x);
        ll a1 = a - useA;
        ll rem1 = n - useA;
        ll useB = min(rem1, b - y);
        ll b1 = b - useB;
        ll prod1 = a1 * b1;

        // Option 2: reduce b first, then a
        ll useB2 = min(n, b - y);
        ll b2 = b - useB2;
        ll rem2 = n - useB2;
        ll useA2 = min(rem2, a - x);
        ll a2 = a - useA2;
        ll prod2 = a2 * b2;

        cout << min(prod1, prod2) << '\n';
    }
    return 0;
}
//chatgpt
