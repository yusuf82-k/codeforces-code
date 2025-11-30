#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

using ll = long long;
using vl = vector<ll>;

// Function to solve each test case
void solve() {
    int n;
    ll c, d;
    cin >> n >> c >> d;
    
    vl a(n * n);
    for (int i = 0; i < n * n; ++i) {
        cin >> a[i];
    }

    // Sort the input array to get the smallest element at index 0
    sort(all(a));

    // Build the expected progressive square starting from the smallest element
    vl b(n * n);
    b[0] = a[0];  // smallest element is the top-left element (a₁,₁)

    // Fill the first row by adding c to the previous element
    for (int i = 1; i < n; ++i) {
        b[i] = b[i - 1] + c;
    }

    // Fill the rest of the matrix by adding d to the element directly above
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            b[i * n + j] = b[(i - 1) * n + j] + d;
        }
    }

    // Sort both arrays to compare irrespective of ordering
    sort(all(b));

    // Compare both sorted arrays
    cout << (a == b ? "YES" : "NO") << '\n';
}

// Main function
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

