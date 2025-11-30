#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<int> b(n + 1);
    vector<int> seen(100005, 0);

    int count = 0;
    for (int i = n; i >= 1; i--) {
        if (!seen[arr[i]]) {
            seen[arr[i]] = 1;
            count++;
        }
        b[i] = count;
    }

    while (m--) {
        int l;
        cin >> l;
        cout << b[l] << "\n";
    }
}
