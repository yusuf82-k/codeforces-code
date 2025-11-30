#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n < k || (k % 2 == 0 && n % 2 == 1))
    {
        cout << "NO" << endl;
        return;
    }
    if (k % 2 == 0 && n % 2 == 0)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << n - k + 1 << endl;
        return;
    }
    if (k % 2 == 1 && n % 2 == 0)
    {
        if (n < 2 * k)
        {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << n + 2 - 2 * k << endl;
        return;
    }
    if (k % 2 == 1 && n % 2 == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++)
            cout << 1 << " ";
        cout << n - k + 1 << endl;
        return;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}