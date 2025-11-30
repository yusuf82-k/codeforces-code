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
        vector<ll> a(2*n);
        vector<ll> odd;
        vector<ll> even;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> a[i];
            if (a[i] & 1)
                odd.push_back(i + 1);
            else
                even.push_back(i + 1);
        }
        if (odd.size() & 1)
        {
            odd.pop_back();
            even.pop_back();
            for (int i = 0; i < odd.size() - 1; i+=2)
                cout << odd[i] << " " << odd[i + 1] << endl;
            for (int i = 0; i < even.size()-1; i+=2)
                cout << even[i] << " " << even[i + 1] << endl;
        }
        else
        {
            odd.pop_back();
            odd.pop_back();
            for (int i = 0; i < odd.size() - 1; i+=2)
                cout << odd[i] << " " << odd[i + 1] << endl;
            for (int i = 0; i < even.size()-1; i+=2)
                cout << even[i] << " " << even[i + 1] << endl;
        }
    }
    return 0;
}