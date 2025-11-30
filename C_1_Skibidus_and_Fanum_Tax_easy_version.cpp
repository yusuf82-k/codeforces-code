#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, b;
        cin >> n >> m;

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        cin >> b;
        bool ok = true;
        if (b - a[0] < a[0])
        {
            a[0] = b - a[0];
        }
        for (int i = 1; i < n; i++)
        {
            if ((a[i] < a[i - 1]) && (b - a[i] < a[i - 1]))
            {
                ok = false;
                break;
            }
            if (a[i] >= a[i - 1])
            {
                if ((b - a[i] < a[i]) && (b - a[i] >= a[i - 1]))
                {
                    a[i] = b - a[i];
                }
            }
            else
                {
                    a[i] = b-a[i];
                }
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}