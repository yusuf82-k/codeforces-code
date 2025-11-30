#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, w;
        cin >> n >> w;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
       // vector<int> b;
        sort(a.begin(), a.end());
       // vector<int> b(a[n - 1] + 1);

        //ll x = a[n - 1];
        int h;
        ll total = 0;
        bool flag = false;
        for (int i = 1; i <= a[n - 1]; i++)
        {
            int x = lower_bound(a.begin(), a.end(), i) - a.begin();
            total += x;
            h = i;
            if (total > w)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << h - 1 << endl;
        }
        else
        {
            cout << h + (w - total) / n << endl;
        }
    }
    return 0;
}