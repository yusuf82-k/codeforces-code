#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long ans = 0;
        vector<int> bracketPositions;

        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c == '_') {
                if (bracketPositions.empty()) 
                    c = '(';
                else 
                    c = ')';
            }

            if (c == ')') {
                ans += i - bracketPositions.back();
                bracketPositions.pop_back();
            } else {
                bracketPositions.push_back(i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
