#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void queries(vector<ll> &v, ll n)
{
    ll k;
    cin >> k;
    if (k > v[n - 1])
    {
        cout << -1 << endl;
        return;
    }
    ll ans = -1;
    ll low = 0;
    ll high = n - 1;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (v[mid] == k)
        {
            cout << mid + 1 << endl;
            return;
        }
        else if (v[mid] < k)
        {
            low = mid + 1;
        }
        else if (v[mid] > k)
        {
            high = mid - 1;
            ans = mid + 1;
        }
    }
    cout << ans << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> sum(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        sort(a.rbegin(), a.rend());
        sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {

            sum[i] = sum[i - 1] + a[i];
        }
        while (q--)
        {
            queries(sum, n);
        }
    }
    return 0;
}