#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        // unordered_map<int,int>m;
        vector<int> a(n);
        int x;
        int p;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == k - 1)
                p = a[i];
        }
        int y = 0;
        bool flag=true;
        sort(a.begin(), a.end());
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] >= p)
            {
                x = a[i + 1] - a[i];
                if (x <= a[i] - y)
                {
                    y += x;
                }
                else
                {
                   flag=false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}