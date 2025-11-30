#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,x;
        cin>>k>>x;
        ll p=x*pow(2,k);
        cout<<p<<endl;
    }
    return 0;
}