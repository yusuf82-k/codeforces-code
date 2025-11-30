#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n *= 2;

        vector<ll> a(n);
        for (ll &x : a)
            cin >> x;

        vector<ll> freq(n + 1, 0);
        vector<ll> f(n, 0), b(n, 0);

        freq[a[0]] = 1;
        f[0] = 1;

        for (int i = 1; i < n; i++)
        {
            freq[a[i]]++;
            if (freq[a[i]] & 1)
                f[i] = f[i - 1] + 1;
            else
                f[i] = f[i - 1] - 1;
        }

        freq = vector<ll>(n + 1, 0);

        freq[a[n - 1]] = 1;
        b[n - 1] = 1;

        for (int i = n - 2; i >= 0; i--)
        {
            freq[a[i]]++;
            if (freq[a[i]] & 1)
                b[i] = b[i + 1] + 1;
            else
                b[i] = b[i + 1] - 1;
        }

/*for(int i=0;i<n;i++)
cout<<f[i]<<" ";
cout<<endl;
for(int i=0;i<n;i++)
cout<<b[i]<<" ";
cout<<endl;
*/

        ll maxi = LLONG_MIN;
        for (int i = 0; i < n-1; i++)
        {
            maxi = max(maxi, f[i] + b[i+1]);
        }

        cout << maxi << endl;
    }
    return 0;
}
