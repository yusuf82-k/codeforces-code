#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void YUSUF()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    int prev = (a[0] % 10 >= a[0] / 10) ? a[0] % 10 : a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < prev)
        {
            cout << "NO" << endl;
            return;
        }
        if ((a[i] % 10 >= a[i] / 10) && (a[i] / 10 >= prev))
        {
            prev = a[i] % 10;
        }
        else
            prev = a[i];
    }
    cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        YUSUF();
    }
    return 0;
}