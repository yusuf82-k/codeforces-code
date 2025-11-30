#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool found = false;

        for (int x = 0; x <= n / 3 && !found; ++x) {
            for (int y = 0; y <= n / 5 && !found; ++y) {
                int rem = n - 3 * x - 5 * y;
                if (rem < 0) continue;
                if (rem % 7 == 0) {
                    int z = rem / 7;
                    cout << x << " " << y << " " << z << '\n';
                    found = true;
                }
            }
        }

        if (!found) {
            cout << -1 << '\n';
        }
    }
    return 0;
}
