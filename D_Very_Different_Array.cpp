#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

// Function to solve a single test case
void solve() {
    // Read n and m
    int n, m;
    if (!(cin >> n >> m)) return;

    // Read array a
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Read array b
    vector<long long> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    // --- Core Logic ---

    // 1. Sort both arrays
    // Sorting is crucial for the greedy two-pointer approach to work.
    // We want to consistently pair small/large a[i] with the most extreme available b[j].
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // 2. Initialize pointers and total difference
    long long total_difference = 0;
    
    // Left pointer for the smallest available elements in b (b[l])
    int l = 0; 
    // Right pointer for the largest available elements in b (b[r])
    int r = m - 1; 

    // 3. Iterate through the sorted array a and make the greedy choice
    for (int i = 0; i < n; ++i) {
        // a[i] is the current element from Petya's array (sorted)
        long long current_a = a[i];

        // Calculate difference with the smallest available b element
        long long diff_l = abs(current_a - b[l]);

        // Calculate difference with the largest available b element
        long long diff_r = abs(current_a - b[r]);

        // Greedy Decision: Choose the option that gives the maximum difference
        if (diff_l >= diff_r) {
            // Pairing with the smallest b element (b[l]) is better or equal
            total_difference += diff_l;
            // Consume the element b[l] by moving the left pointer
            l++;
        } else {
            // Pairing with the largest b element (b[r]) is strictly better
            total_difference += diff_r;
            // Consume the element b[r] by moving the right pointer
            r--;
        }
    }

    // Output the result
    cout << total_difference << endl;
}

// Main function to handle multiple test cases
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}