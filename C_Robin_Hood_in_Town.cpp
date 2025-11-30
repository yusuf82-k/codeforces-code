#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (n < 3)
        {
            cout << -1 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        ll req = n * 2 * a[n/2] + 1;
        if(req<=sum)
        cout<<0<<endl;
        else
        cout << req - sum << endl;
    }
    return 0;
}