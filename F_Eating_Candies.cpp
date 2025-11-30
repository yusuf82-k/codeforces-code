#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        ll l = a[0], r = a[n - 1];
        ll i = 0;
        ll j = n - 1;
        ll ans = 0;
        while (i < j)
        {
            if (l == r)
            {
                ans = max(ans, i + 1 + n - j);
            }
            if (l <= r)
            {
                i++;
                l += a[i];
            }
            else if (r < l)
            {
                j--;
                r += a[j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}