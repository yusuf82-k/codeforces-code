#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n == 1)
        {
            cout << 1 << endl
                 << 1 << endl;
            continue;
        }
        if (k == 1 || k == n)
        {
            cout << -1 << endl;
            continue;
        }

        ll x = k - 1;
        ll y = n - k;
        if (x <= y)
        {
            cout << 2 * k - 1 << endl;
            for (int i = 1; i <= 2 * k - 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << 2 * y + 1 << endl;
            cout << 1 << " ";
            for (int i = k - y + 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}