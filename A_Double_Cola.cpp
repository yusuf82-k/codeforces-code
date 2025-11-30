#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll count = 0;
        ll p = 5;

        while (p < n) {
            count++;
            n -= p;
            p *= 2;
        }

        double x = (double)n / pow(2, count);
        x = ceil(x);  // ✅ Fix

        if (x == 1)
            cout << "Sheldon\n";
        else if (x == 2)
            cout << "Leonard\n";
        else if (x == 3)
            cout << "Penny\n";
        else if (x == 4)
            cout << "Rajesh\n";
        else if (x == 5)
            cout << "Howard\n";
    }
    return 0;
}
