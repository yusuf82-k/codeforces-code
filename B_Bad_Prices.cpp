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
        ll mini = a[n - 1];
        ll count = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > mini)
            {
                count++;
            }
            else
                mini = a[i];
        }
        cout << count << endl;
    }
    return 0;
}