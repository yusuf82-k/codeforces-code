#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll w, h, k, k2, k3, k4;
        cin >> w >> h >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
            cin >> a[i];
        cin >> k2;
        vector<int> b(k2);
        for (int i = 0; i < k2; i++)
            cin >> b[i];
        cin >> k3;
        vector<int> c(k3);
        for (int i = 0; i < k3; i++)
            cin >> c[i];
        cin >> k4;
        vector<int> d(k4);
        for (int i = 0; i < k4; i++)
            cin >> d[i];
        int h1 = a[k - 1] - a[0];
        int h2 = b[k2 - 1] - b[0];
        int v1 = c[k3 - 1] - c[0];
        int v2 = d[k4 - 1] - d[0];
        ll area1 = max(h1, h2) * h;
        ll area2 = max(v1, v2) * w;
        cout << max(area1, area2) << endl;
    }
    return 0;
}