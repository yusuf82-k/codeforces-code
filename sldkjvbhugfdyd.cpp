#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int T = 1; T <= t; T++)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        int x;
        vector<ll> b(n);
        vector<ll> c = a;
        for (int i = n - 2; i >= 0; i--)
        {
            c[i] = min(c[i], c[i + 1]);
        }
        b[0] = a[0];
        for (int i = 1; i <n; i++)
        {
            b[i] = max(a[i], b[i - 1]);
        }
        bool flag = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] < c[i + 1] && a[i] > b[i - 1])
            {
                x = i + 1;
                flag = true;
                break;
            }
        }
        if (a[0] < c[1])
        {
            flag = true;
            x = 1;
        }
        else if (a[n - 1] > b[n - 2]&&(flag!=true))
        {
            flag = true;
            x = n;
        }

        if (flag)
            cout << "Case " << T << ": " << x << endl;
        else
            cout << "Case " << T << ": Humanity is doomed!"<<endl;
    }
    return 0;
}