#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<ll> a(n);
        vector<ll>b(n);
        int count=0;
        int index;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if(a[i]<b[i]){
            count++;
            index=i;
            }
        }
        if (count == 0) {
            cout << "YES\n";
            continue;
        }
        if (count > 1) {
            cout << "NO\n";
            continue;
        }
        ll x = b[index] - a[index];
        bool flag = true;
        for (int j = 0; j < n; j++) {
            if (j == index) continue;
            ll extra= a[j] - b[j];
            if (extra < x) {
                flag = false;
                break;
            }
        }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}
