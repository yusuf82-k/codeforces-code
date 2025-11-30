#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        vector<int> b;
        b.push_back(1);
        for (int i = 1; i < n; i++)
        {

            if (s[i] == s[i - 1])
            {
                b.back() += 1;
            }
            else
                b.push_back(1);
        }
        int l = b.size() / 2;
        int ans;
        if (y >= 0)
        {
            ans = n * (x + y);
        }
        else
        {
            ans = y * (l + 1) + n * x;
        }
        cout << ans << endl;
    }
    return 0;
}