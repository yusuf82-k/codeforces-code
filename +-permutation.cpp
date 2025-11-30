#include <bits/stdc++.h>
using namespace std;

void generateSigns(int n) {
    int total = 1 << n; // 2^n possibilities
    for (int mask = 0; mask < total; mask++) {
        for (int i = n - 1; i >= 0; i--) {
            if (mask & (1 << i)) cout << '+';
            else cout << '-';
        }
        cout << "\n";
    }
}

int main() {
    int n ; 
    cin>>n;// change size here
    generateSigns(n);
    return 0;
}
