#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll first=min(m,a);
        ll sec=min(m,b);
        ll total=min(first+sec+c,2*m);
        cout<<total<<endl;
    }
    return 0;
}