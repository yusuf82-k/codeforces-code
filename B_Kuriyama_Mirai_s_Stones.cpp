#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n + 1, 0);
        vector<ll> sum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i - 1] + a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> b(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            b[i] = b[i - 1] + a[i];
        }
        ll m;
        cin >> m;
        while (m--)
        {
            ll ty, l, r;
            cin >> ty >> l >> r;
            if (ty == 1)
            {

                cout << sum[r] - sum[l - 1] << endl;
            }
            else
            {

                cout << b[r] - b[l - 1] << endl;
            }
        }
    }
    return 0;
}