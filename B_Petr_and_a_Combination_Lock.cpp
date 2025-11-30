#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int total_combinations = 1 << n;

    bool found_solution = false;

    for (int i = 0; i < total_combinations; ++i) {
        int current_angle = 0;
        
        for (int j = 0; j < n; ++j) {
            
            if ((i >> j) & 1) {
                current_angle += a[j];
            } else {
                current_angle -= a[j];
            }
        }

        if (abs(current_angle) % 360 == 0) {
            found_solution = true;
            break; 
        }
    }

    if (found_solution) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}