#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        if (l == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (l % a != 0)
        {
            ll count = 0;
            while (l % b == 0)
            {
                count++;
                l /= b;
            }
            cout << count + 1 << endl;
            continue;
        }
        if (l % b != 0)
        {
            ll count = 0;
            while (l % a == 0)
            {
                count++;
                l /= a;
            }
            cout << count + 1 << endl;
            continue;
        }
        set<int> s;
        ll n ;
       // ll x;
        ll b1 = 1;
        while (l % b1 == 0)
        {
            s.insert(l / b1);
            n = l / b1;
            while (n % a == 0)
            {
                s.insert(n / a);
                n /= a;
            }
            b1 *= b;
        }
        cout<<s.size()<<endl;
    }
    return 0;
}