#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(2 * n + 1);
        vector<int> d(2 * n + 1);
        cin >> a[0];
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == a[i - 1])
            {
                count++;
            }
            else
            {
                c[a[i - 1]] = max(c[a[i - 1]], count);
                count = 1;
            }
        }
        c[a[n - 1]] = max(c[a[n - 1]], count);
        count = 1;
        cin >> b[0];
        for (int i = 1; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == b[i - 1])
            {
                count++;
            }
            else
            {
                d[b[i - 1]] = max(d[b[i - 1]], count);
                count = 1;
            }
        }
        d[b[n - 1]] = max(d[b[n - 1]], count);
        int maxi = 0;
        for (int i = 1; i <= 2 * n; i++)
        {
            int x = c[i] + d[i];
            maxi = max(maxi, x);
        }
        cout << maxi << endl;
    }
    return 0;
}