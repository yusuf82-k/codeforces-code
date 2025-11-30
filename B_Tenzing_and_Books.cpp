#include <bits/stdc++.h>
using namespace std;

// Function to process one stack and update knowledge
void canReachX(vector<int>& v, int& know, int x) {
    for (int val : v) {
        // Check if reading this book doesn't add bits outside x
        if ((val | x) == x)
            know |= val;  // Update knowledge
        else
            break;        // Stop reading this stack
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n), b(n), c(n);
        for (int& i : a) cin >> i;
        for (int& i : b) cin >> i;
        for (int& i : c) cin >> i;

        int know = 0;  // Initial knowledge

        // Try reading from all three stacks
        canReachX(a, know, x);
        canReachX(b, know, x);
        canReachX(c, know, x);

        // Final check
        if (know == x)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
