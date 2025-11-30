#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll x=n;
        int ans=0;
        int p=1;
        while(n>1){
            int rem=n%2;
            ans+=(rem*p);
            n/=2;
            p*=2;
        }
        cout<<x-1-ans<<endl;

    }
    return 0;
}