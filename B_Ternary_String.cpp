#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool is_valid(const map<char, int>& counts) {
    return counts.at('1') > 0 && 
           counts.at('2') > 0 && 
           counts.at('3') > 0;
}

void solve() {
    string s;
    if (!(cin >> s)) return;

    int n = s.length();
    int min_len = n + 1;
    int L = 0;
    
    map<char, int> counts = {{'1', 0}, {'2', 0}, {'3', 0}};

    for (int R = 0; R < n; ++R) {
        counts[s[R]]++;

        while (is_valid(counts)) {
            min_len = min(min_len, R - L + 1);
            if(min_len==0){
                cout<<3<<endl;
                return;
            }
            counts[s[L]]--;
            L++;
        }
    }

    if (min_len > n) {
        cout << 0 << "\n";
    } else {
        cout << min_len << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }

    return 0;
}