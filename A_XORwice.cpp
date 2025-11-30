#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin>>a>>b;
        cout<<(a^(a&b))+(b^(a&b))<<endl;
    }
    return 0;
}