#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool ok(int c, const vector<ll>& q, const vector<ll>& r, ll k) {
    ll limit = k; 

    for (int i = 0; i < c; i++) {
        ll a = q[i] + 1;
        ll b = r[c - 1 - i] + 1;

       
        if ((a*b-1)>k) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> q(n), r(n);
        for (int i = 0; i < n; i++) cin >> q[i];
        for (int i = 0; i < n; i++) cin >> r[i];

        sort(q.begin(), q.end());
        sort(r.begin(), r.end());

        int lo = 0, hi = n;

        while (lo < hi) {
            int mid = (lo + hi ) / 2;
            if (ok(mid, q, r, k)) lo = mid+1;
            else hi = mid-1;
        }

        cout << lo << endl;
    }
    return 0;
}
