#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,y,r;
       cin>>n>>y>>r;
       cout<<min(n,(y/2)+r)<<endl;
    }
    return 0;
}