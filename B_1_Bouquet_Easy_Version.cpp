#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<ll, ll> hs;
        for(auto x:a){
            hs[x]++;
        }
        ll ans=0;
        for(auto &v:hs){
            ll x=v.first;
            ll y=v.second;
            ll l=min(m/x,y);
            ans=max(ans,l*x);
            if(hs.find(x+1)==hs.end())
            continue;
            ll z=hs[x+1];
            for(int i=0;i<)
        for (ll i = 1; i <= y; i++) {
            if (i * x > m) break;
            ll du = m - i * x;
            ll su = min(du / (x + 1), z) * (x + 1) + i * x;
            ans = max(ans, su);
        }
        }
    }
    return 0;
}