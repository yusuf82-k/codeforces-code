#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        string s;
        cin >> n >> x >> k >> s;
        ll d = abs(x);
        bool loop = false;
        ll lt = -1;
        ll zt = -1;
        // ll maxi=INT_MIN;

        if (x < 0)
        {
            ll dis=0;
          

            ll maxi = INT_MIN;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == 'R')
                {
                    dis += 1;
                }
                else
                {
                    dis -= 1;
                }
                if (dis == d && zt == -1)
                {
                    zt = i + 1;
                }
                maxi = max(maxi, dis);
                if (dis == 0)
                {
                    if (lt == -1)
                    {
                        lt = i + 1;
                    }
                    loop = true;
                }
            }
            if (maxi < d)
            {
                cout << 0 << endl;
            }
            else
            {    if(loop)
                cout << (k - zt) / lt + 1 << endl;
                else
                cout<<1<<endl;
            }
        }

        else
        {
          ll dis=0;

            ll maxi = INT_MIN;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == 'L')
                {
                    dis += 1;
                }
                else
                {
                    dis -= 1;
                }
                if (dis == d && zt == -1)
                {
                    zt = i + 1;
                }
                maxi = max(maxi, dis);
                if (dis == 0)
                {
                    if (lt == -1)
                    {
                        lt = i + 1;
                    }
                    loop = true;
                }
            }
            if (maxi < d)
            {
                cout << 0 << endl;
            }
            else
            {    if(loop)
                cout << (k - zt) / lt + 1 << endl;
                else
                cout<<1<<endl;
            }
        }
    }
    return 0;
}
