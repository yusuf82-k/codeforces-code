#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool isprime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int first_divisor(int n) {
    if (n % 2 == 0)
        return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;

        if (r < 4 || (l == r && isprime(l))) {
            cout << -1 << endl;
            continue;
        }

        if (l == r) {
            cout << first_divisor(l) << " " << l - first_divisor(l) << endl;
            continue;
        }

        if (r & 1)
            cout << (r-1) / 2 << " " << (r - 1) / 2 << endl;
        else
            cout << r/ 2 << " " << r / 2 << endl;
    }
    return 0;
}
