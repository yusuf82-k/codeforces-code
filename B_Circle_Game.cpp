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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2)
        {
            cout << "Mike" << endl;
            continue;
        }
        bool ok = true;

        for (int i = 1; i < n; i += 2)
        {
            if (a[i] >= a[i - 1])
            {
                ok = false;
                break;
            }
        }
        if(a[0]<=a[n-1])
        ok=false;
        if (ok)
        {
            cout << "Mike" << endl;
        }
        else
            cout << "Joe" << endl;
    }
    return 0;
}