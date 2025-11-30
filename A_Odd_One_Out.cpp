#include <bits/stdc++.h>

using namespace std;


void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a ^ b ^ c) << endl;
}

int main() {

	int t; 
    cin >> t;
     for (int i = 1; i <= t; i++) {
        solve();
    }
}