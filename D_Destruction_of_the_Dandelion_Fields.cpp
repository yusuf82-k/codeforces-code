#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a;
        int x;
        ll total = 0;
        int count = 0;
        int odd;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
            {
                total += x;
            }
            else
            {
                a.push_back(x);
                odd = x;
                count++;
            }
        }
        if (count == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (count == 1)
        {
            cout << odd + total << endl;
            continue;
        }
        sort(a.begin(), a.end());
        int l = a.size();

        for (int i = l / 2; i < l; i++)
        {
            total += a[i];
        }
        cout << total << endl;
    
}
    return 0;
}