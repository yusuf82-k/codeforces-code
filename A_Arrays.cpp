#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int k, m, n1, n2;
    cin >> n1 >> n2 >> k >> m;
    vector<int> a(n1);
    for (int i = 0; i < a.size(); ++i) cin >> a[i];
    vector<int>b(n2);
    for (int i = 0; i < b.size(); ++i) cin >> b[i];
    if (a[k - 1] < b[n2 - m]) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}